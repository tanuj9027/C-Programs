#include<stdio.h>
void main()
{
	int a,q,w,e,r;
	printf("the three digit no is \n");
	scanf("%d",&a);
	q=a%10;
	printf("%d",q);
	w=a/10;
	e=w%10;
	printf("%d",e);
	r=w/10;
	printf("%d",r);
	
}
