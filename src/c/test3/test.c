#include "stdio.h"

int main()
{
	char str[3];
    char const *sunny = "sunny";
	printf("How is the World?\n");
	gets(str);
	printf("Hello %s and %s World!\n",str,sunny);
}
