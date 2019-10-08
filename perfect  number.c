#include<stdio.h>
void main()
{
	int n,i,sum=0;
	printf("enter the number to check perfect number");
	scanf("%d",&n);
		for(i=1;i<n;i++)
		{
			if(n%i==0)
			{
			sum=sum+i;
		    }
		}
		if(n==sum)
		{
			printf("printf it is perfect number%d",sum);
		}
		else
		{
		printf("it is not a perfect number%d",sum);	
		}
		
		
	}
