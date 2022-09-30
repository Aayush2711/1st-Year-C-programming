//WAP to check palindrone number
//Example: 1. 121 reverse is 121

#include<stdio.h>
main()
{
	int n,r, sum=0, temp;
	printf("ENter the number:",n);
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r= n%10;
		sum=sum*10+ r;
		n=n/10;
	}
	if (temp==sum)
	printf("\nThe number is palindrone: %d",sum);
	else
	printf("\nThe number is not palindrone");
	
}
