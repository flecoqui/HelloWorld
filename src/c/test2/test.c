#include "stdio.h"
int main()
{
	char ch;
	printf("How is the World? M: Mad, B: Beautiful \n");
	ch=fgetc(stdin);
	if(ch=='M'){
		printf("Hello Mad World!\n");
	}
	else if(ch=='B'){
		printf("Hello Beautiful World!\n");
	}
	else{
		printf("Hello World!\n");
	}
}
