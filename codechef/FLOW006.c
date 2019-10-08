#include<stdio.h>
int main()
{
	int p,i,n,t;
	scanf("%d",&p);
	{
		for(i=1;i<=p;i++)
		{
			scanf("%d",&n);
			int sum=0;
			while(n!=0)
			{
			 t=n%10;
			 sum=sum+t;
			 n=n/10;
		    }
		    printf("%d\n",sum);
		}
	}
	return 0;
}
