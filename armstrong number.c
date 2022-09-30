//WAP to find armstrong number
//Example of Armstrong Number
//153 = (1*1*1)+(5*5*5)+(3*3*3)  

//(1*1*1)=1  
//(5*5*5)=125  
//(3*3*3)=27   
//1+125+27=153

#include<stdio.h>
main()
{
	int n,r,sum=0,temp;
	printf("Enter the number: ",n);
	scanf("%d",&n);
	temp=n;  //Storing the input in a temp variable
	while(n>0)
	{
		r=n%10;  
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(temp== sum)
	printf("The number is armstrong number",n);
	else
	printf("The number is not armstrong number");
}
