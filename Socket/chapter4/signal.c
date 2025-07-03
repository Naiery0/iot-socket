#include <stdio.h>
#include <unistd.h>
#include <signal.h>

void timeout(int sig){
	if(sig ==  SIGALRM) puts("timeout!");
	alarm(2);
}

void keycontrol(int sig){
	if(sig ==SIGINT) puts("CTRL+C Pressed");
}

void main(){

	signal(SIGALRM, timeout);
	signal(SIGINT, keycontrol);
	alarm(2);  //2초 뒤 SIGALRM발생 

	for(int i = 0; i < 5; i++){
		puts("wait...");
		sleep(100);
	} 
}
