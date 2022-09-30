//WAP to swap 2 number using function

#include<stdio.h>
int swap(int x, int y);
main()
{
	int a,b;
	printf("enter the 2 numbers :\n");
	scanf("%d %d",&a,&b);
	swap(a,b);
}
int swap(int x, int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("\nAfter swapping: %d %d ",x,y);
}
