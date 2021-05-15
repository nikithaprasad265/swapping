#include<stdio.h>
int main()
{
	int x=10, y=50;
	printf("Before swapping x=%d y=%d \n ",x,y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("After swapping x=%d y=%d",x,y);
	
}
