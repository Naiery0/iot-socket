#include <stdio.h>
#include <unistd.h>

int main(){

	pid_t pid = fork();

	if(pid == 0) puts("Hi, I'm child process\n");
	else {
		printf("chile process ID: %d\n", pid);
		sleep(30);
	}
	if(pid == 0) puts("end child process");
	else puts("end parents process");
	
	
	return 0;
}
