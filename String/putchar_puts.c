//putchat and puts to output the string

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char str[100];
	int i;
	puts("Enter the string");
	gets(str);
	puts("Print the string using putchar:");
	for(i=0;str[i] !='\0';i++)
	{
		
		putchar(str[i]);
	}
}
