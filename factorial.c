#include<stdio.h>
void main()
{
	int a,i=1,sum=1;
	printf("enter no to be factorial\n");
	scanf("%d",&a);
	while(i<=a)
	{
		sum=(sum*i);
		i++;
	}
	printf("factorial=%d",sum);
}
