//checks the vowels and constant from a string and count them and try to show them

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char str[100] , str_vow[100],str_cons[100];
	int vow=0,cons=0;
	printf("Enter the String:");
	gets(str);
	int i;
	
	for( i=0;str[i]!='\0';i++)
	{
		if(str[i]=='A' || str[i]=='a' || str[i]=='E' || str[i]=='e' || str[i]=='I' || str[i]=='i' || str[i]=='O' ||str[i]=='o' || str[i]=='U' || str[i]=='u')
		
		{
			 vow++;
			 	str_vow[i]=str[i];
			
		}	
			 
		else
		{
		cons++; 
		str_cons[i]=str[i];
			
		}
	}
	printf("The number of Vowels are:%d and the number of constants are:%d",vow,cons);
	printf("And the Vowels and constants are:%s %s",str_vow,str_cons);
 } 
