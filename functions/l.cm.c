#include<stdio.h>
void main()
{
	int a,b,l;
	printf("enter two number to do lcm");
	scanf("%d%d",&a,&b);
	for(l=1;l<=a*b;l++)
	{
		if((l%a==0&&l%b==0))
		{
			break;
		}

	}
	printf("lcm is%d",l);

}
