// reading a line with whitespace using get char() function using the method of read line character by character
#include<stdio.h>

int main()
{
	char arr1[100],character;
	int c;
	c=0;
	printf("Enter the string:");
	do{
		character=getchar();
		arr1[c]=character;
		c++;
	}
	while(character !='\n');
	c=c-1;
	arr1[c]='\0';
	printf("%s",arr1);
}
