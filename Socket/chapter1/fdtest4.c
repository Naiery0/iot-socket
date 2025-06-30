#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(){

	int fd;
	char buf[20];
	ssize_t read_sz;
	
	fd = open("hello.txt", O_RDONLY);
	if (fd < 0){
		perror("could not open hello.txt");
		exit(1);
	}
	read_sz = read(fd, buf, sizeof(buf));
	if(read_sz < 0){
		perror("Failed to read from file");
		exit(1);
	}
	printf("read from file: %s, buf");

	close(fd);
	
	return 0;
}

/*
#include <unistd.h>
ssize_t read(int fd, void* buf, size_t count);
*/
