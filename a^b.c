# include<stdio.h>
void main()
{
	int a,b,sum=0,i=1;
	printf("enter to number anad its power \n");
	scanf("%d%d",&a,&b);
	while(i<=b)
	{
		sum=(sum+(a*i));
		i++;
	}
	printf("answer is %d",sum);
}
