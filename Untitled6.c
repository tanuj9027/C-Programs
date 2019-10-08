#include<stdio.h>
void main()
{
	int a,r,sum=0;
	printf("Enter the no \n");
	scanf("%d",&a);
	for(;a>0;)
	{
		r=a%10;
		sum=sum+r;
		a=a/10;
	}
	printf("the sum of digits are %d",sum);
}
