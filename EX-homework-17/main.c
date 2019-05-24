#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	char*ptr;
	char string[]="Happy New Year";
	int length=strlen(string);
	ptr=(char*)malloc(sizeof(char)*(length+1));
	ptr=string;
	puts(ptr);
	system("pause");
	return 0;
	
 } 
