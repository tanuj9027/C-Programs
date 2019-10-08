# include<stdio.h>
void main()
{
	int a,b,c,sum;
	printf("input 3 angle of triange");
	scanf("%d%d%d",&a,&b,&c);
	sum=a+b+c;
	if(sum>180)
	{
		printf("it is not valid triangle");
	}
	else
	{
		printf("proper triangle");
	}
}
