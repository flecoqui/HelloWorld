	#include "stdio.h"
	#define MAX_LIMIT 3
	int main()
	{
		char str[MAX_LIMIT];
		char const *sunny = "sunny";
		printf("How is the World?\n");
		fgets(str, MAX_LIMIT, stdin);
		printf("Hello %s and %s World!\n",str,sunny);
	}
