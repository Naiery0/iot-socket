#include <stdio.h>
#include <unistd.h>


int main(){

	int fds[2], fds2[2];
	char str[] = "Who are you?";
	char str2[] = "Thank you for your message.";
	char buf[50];
	pid_t pid;

	pipe(fds), pipe(fds2);
	pid = fork();

	if(pid == 0){
		write(fds[1], str, sizeof(str));
		read(fds2[0], buf, sizeof(buf));
		printf("child proc output: %s\n", buf);
	}
	else{
		read(fds[0], buf, sizeof(buf));
		printf("parent proc output: %s\n", buf);
		write(fds[1], str2, sizeof(str2));
		sleep(3);
	}
	
	return 0;
}
