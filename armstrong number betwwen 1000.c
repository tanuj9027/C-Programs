#include<stdio.h>
void main()
{
	int i,sum,t,q;
	printf("armstrong number are");
	for(i=1;i<=5000;i++)
	{
		sum=0;
		t=i;
		for(;t!=0;)
		{
			q=t%10;
			sum=sum+q*q*q;
			t=t/10;
		}
		if(i==sum)
			printf("%d\n",i);
	}
}
