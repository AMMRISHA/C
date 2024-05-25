
//Q=> how many least rooms are needed to allocate the all students so that number of students in a room in equal 
//and  each room  contain only the same course student

#include<stdio.h>

int main()
{
	int a[100];
	int i ,course ,f,s,t,first_course_student,second_course_student ,total_no_room, hcf,n;
	
	int room_need(int ,int , int);
	
	printf("Enter the number of courses:");
	scanf("%d",&course);
	for(i=1;i<n;i++)
	{
	printf("Enter the no. of students in the %d course:",i);
	scanf("%d",&a[i]);
	}
	
	

	
		for(i=2;i<=f || i<=s || i<=t ;i++)
		
		{
			if(s%i==0 && f%i == 0)
			{
				hcf=i;
			}
			
		}
		
		printf("%d",hcf);

	total_no_room= (f/hcf + s/hcf +t/hcf);
	printf("\nTotal least number of rooms are:%d",total_no_room);
}
