#include<stdio.h>

int main(){
	
	 int a[] ={10,20,30,50,40};
	 int x , i ;
	  int flag;
	 printf("Enter your search elememt:");
	 scanf("%d",&x);
	 for(i=0;i<=4;i++)
	 {
	    int flag =0;
	 	if(a[i]==x)
	 	{
		 
	 		flag =1;// set flag 1 if the searching element is found 
	 		printf("Your element is  found %d ",i);
	 	}
	 	else
	 		flag=0;// set to 0 if searching elements is not in the given array
	 		
	 		
	 }


	 return 0;
	}
