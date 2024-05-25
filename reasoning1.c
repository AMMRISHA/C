//Q=> reasoning for elegibilty criteria for accounts department

#include<stdio.h>

int main()
{
	char a[100] , g , cer ;
	int age , Exp , marks;
	printf("Enter your Full Name:");
	scanf("%s",&a);
	printf("Enter all the below credentials: ");
	printf("Graduation in Commerce with minimum 60% marks: YES/NO\n");
	scanf("%s", &g);
	
	printf("\nAge as of 15-04-2024:");
	scanf("%d",&age);
	
	printf("How many years of experience do you have?");
	scanf("%d",&Exp);
	
	printf("% secured in the graduation:");
	scanf("%d", &marks);
	printf("Do you have any cetification course :YES/NO");
	scanf("%s",&cer);
	
	if( g == "yes" || g=="YES"|| cer=="yes" || cer=="YES"  )
	
	{
		
		if(age<=24 || age>=40)
		{
			if( Exp>= 2 )
		}
		printf("Move on to the registration you are eligible for the application:");
	}
	else
	{
				printf("Sorry you are not eligible for the application:");

	}
	
	
}
