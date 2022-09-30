//WAP to  find even or odd using function

#include<stdio.h>
void evenodd(int x);  //Declared the function
main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	evenodd(n);
	
}
void evenodd (int x)   
{
	if (x%2==0)
	printf("\n%d is even",x);
	else
	printf("\n%d is odd",x);
}
