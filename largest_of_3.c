//WAP to find the largest number by taking 3 inputs 

#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter the 3 values: ");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	{
		printf("the greates number is a:%d",a);
	}
	if(b>a && b>c)
	{
		printf("The greatest number is b:%d",b);
	}
	if(c>a && c>b)
	{
		printf("The greatest number is c:%d",c);
	}
}
