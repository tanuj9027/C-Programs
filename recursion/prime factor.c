#include<stdio.h>
void main()
{
	int n,i,t;
	printf("enter the number");
	scanf("%d",&n);
	t=n;
	for(i=1;i<t;i++)
	{
		if(n%i==0)
		{
			t=n/i;
			printf("%d\n",i);
		}
	}
}
