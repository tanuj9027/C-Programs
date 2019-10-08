#include<stdio.h>
void main()
{
	int a,q,w,e,r,sum,temp;
	printf("the three digit no is \n");
	scanf("%d",&a);
	q=a%10;
	w=a/10;
	e=w%10;
	r=w/10;
	sum=q*100+e*10+r;
		if(sum==a)
	printf("it is reverse no");
	else
	printf("it is not = to reverse");
	
}
