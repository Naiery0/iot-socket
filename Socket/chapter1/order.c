#include <stdio.h>

/* Little Endian - 작은 주소에 작은 값 저장*/

void main(){

	int n = 0x1234567;
	char *pn = &n;
	printf("1st: %p, %#x\n", &(*pn), *pn); // 작은 주소
	printf("2st: %p, %#x\n", &(*(pn+1)), *(pn+1));
	printf("3st: %p, %#x\n", &(*(pn+2)), *(pn+2));
	printf("4st: %p, %#x\n", &(*(pn+3)), *(pn+3)); // 큰 주소

	return;
}
