//WAP to read an integer and print its multiplicaation table


#include<stdio.h>
main()
{
	int a,i=1;
	printf("Enter the number:");
	scanf("%d",&a);
	printf("\nThe Multiplication Table of %d:\n",a);
	do
	{
		printf("%d\n",(a*i));
		i++;
	}while(i<=10);
}
