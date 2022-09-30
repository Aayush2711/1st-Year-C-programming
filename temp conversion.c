//WAP to convert D. to F. temperature

#include<stdio.h>
main()
{
	float deg,far;
	printf("Enter the temp in deg.:",deg);
	scanf("%f",&deg);
	
	far=(deg*1.8)+32; //Formula 
	printf("\nThe temperature in far. is:%f",far);
}
