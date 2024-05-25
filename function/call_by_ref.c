#include<stdio.h>

fun(int *);

fun(int *a)
{
	printf("The value of the arr[0] after passing the function with the help of call by reference without any changes:%d\n",a);
	a=45;
		
	printf("The value of the arr[0] after passing the function with the help of call by reference after change the value:%d\n",a);
}
int main()
{
	int choice;
	int arr[2]={10,20};
	fun(arr[0]);
	fun(&arr[0]);
	printf("\n\n\nThe value of the arr[0] after passing the function with the help of call by reference after change the value:%d\n",arr[0]);

}
