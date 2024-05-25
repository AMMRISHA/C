// cos function

#include<stdio.h>
#include<math.h>
#define PI 3.1416
#define MAX 180
int main()
{
	int i , j;
	float x,y ;
	int angle=0;
		printf("	Angle		Cos(Angle)	\n");
	
	while(angle<=MAX)
	{
		x= (PI/MAX)*angle;
		y=cos(x);	
		printf("%15d %13.4f\n",angle,y);
		angle=angle+10;
	}
}
