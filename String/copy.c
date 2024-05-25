//copy a string value to another variable

#include<stdio.h>

int main()

{
	char string1[80],string2[80];
	int i;
	
	printf("Enter the string");
	scanf("%s",string1);
	
	for(i=0;string1[i]!='\0';i++)
	{
		string2[i]=string1[i];
	}
	string2[i]='\0';
	printf("%s String1:",string1);
	printf("%s String2:",string2);
}
