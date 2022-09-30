//WAP to print fibonacci series.

//Output :0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144,
#include<stdio.h>
main()
{
	int n1=0,n2=1,n3,i,num;
	printf("Enter the number:",num);  //Enter 12 to get same output
	scanf("%d",&num);
	printf("%d%d",n1,n2);
	for(i=2;i<=num;i++)
	{
		n3=n1+n2;
		printf(" %d",n3);
		n1=n2;
		n2=n3;
	}

}
