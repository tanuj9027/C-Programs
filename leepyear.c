
#include<stdio.h>
void main()
{
	int year;
	printf("Enter the year");
	scanf("%d",&year);
	if(((year%4)==0)&& (((year%100)!=0)|| ((year%400)==0)))
	{
		printf("year %d is a leap year",year);
	}
	else
	{
		printf("it is not a leap");
	}
}
