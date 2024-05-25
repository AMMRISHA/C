//concatenate two string

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	int i , j, k;
	
	char string1[10]={"Ammrisha"};
	char string2[10]={"Chowdhury"};
	char string3[100];
	
	for(i=0;string1[i] !='\0';i++)
	{
		string3[i]=string1[i];
	}
	
	string3[i]=' ';
	for(j=0;string2[j] !='\0';j++)
	{
		string3[i+j+1]=string2[j];
	}
	string3[i+j+1]='\0';
	printf("%d",&string3[i+j+2]);
	printf("%s",string3);
	

}
