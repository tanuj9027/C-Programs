#include<stdio.h>
void main()
{
	int year;
	scanf("%d",year);
	if((year%4)==0)&&((!(year%100)==0))||((year%400)==0)
	{
		printf("year %d is a leap year",year);
	}
}
