//read a string from the given line using scanf which is able to read characters without whitespace and newline
//also %ws or %10s
#include<stdio.h>

void main()
{
	char arr1[20] ,arr2[20],arr3[20],arr4[20],arr_father_n[20],arr_father_sur[20],arr_mother_n[20],arr_mother_sur[20];
	
	printf("Enter full name Your name:");
	scanf("%10s %s",arr1,arr2);
	printf("Enter Your Father and Mother name:");
	scanf("%s%s%s%s",arr_father_n,arr_father_sur,arr_mother_n,arr_mother_sur);	
	printf("Do you have any boyfriend?");
	scanf("%s%s",arr3,arr4);
	
	printf("Hi %s %s your father %s %s is a hardworking person and your mother %s %s also a superwoman Your Boyfriend name is:%s %s",arr1,
	arr2,arr_father_n,arr_father_sur,arr_mother_n,arr_mother_sur,arr3,arr4);
	
}
