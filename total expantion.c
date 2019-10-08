# include<stdio.h>
void main()
{
	int qty,discount=0;
	float rate,total;
	printf("enter quantity and rate\n");
	scanf("%d%f",&qty,&rate);
	if (qty>1000)
	 discount=10;
	 total=(qty*rate)-((qty*rate*discount)/100);
	 printf("the price is %f",total);
	}
