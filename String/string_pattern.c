//c
//cp
//cpr
//cpro
//cprog
//cprogr
//.

//.
//cprogramming
//------
//cprogrammin
//cprogrammi
//cprogramm
//cprogram
//.
//.
//c


#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	int i,j;
	char name[]="cprogramming";
	
	for(i=0;name[i]!='\0';i++)
	{
		int n =i;
		for(j=0;j<=n;j++)
		{
		
		putchar(name[j]);
		
		}
		puts("\n");
	}
	puts("-------------------");
	
	for(i=12;i>=0;i--)
	{
		int n=i;
		
		for(j=0;j<n;j++)
		{
		
		putchar(name[j]);
		
		}
		puts("\n");
	}
}
