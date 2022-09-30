//WAP to calculate factiorial of number

#include<stdio.h>
main()
{
	int i,a, fact=1;
	printf("Enter the number:",a);
	scanf("%d",&a);
	for(i=a;i>=1;i--)
	{
		fact=fact*i;
	}
	printf("\nThe factorial is : %d",fact);
}
