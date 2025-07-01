#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <arpa/inet.h>


#define <BUFFER_SIZE 1020>
int main(int argc, char** argv){

	int server_fd, client_fd;
	struct sockaddr_in server_addr, client_addr; //IPv4 관련 구조체
	socklen_t cklient_addr_size;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read;

	if(argc != 2){
		printf("%s [port]\n"; argv[0]);
		exit(1); 
	}

	server_fd = socket(PF_INET, SOCK_STREAM, 0);
	if(server_fd == -1) {
		perror("socket failed");
		exit(1)
	}
	

	
	

	return 0;
}
