#include<stdio.h>

fun(int);

fun(int a)
{
	a=45;
	printf(" The value of the first element of the array after changeing the value: %d",a);	

}
int main()
{
	int choice;
	int arr[2]={10,20};
	fun(arr[0]);
		printf("\nThe value of the index of arr[0] is:%d",arr[0]);
}
