#include<stdio.h>
void main()
{
	int a,b,c;
	printf("input age of 3 boys ");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		printf("a is greater");
		else
		printf("C is greater");
		
	}
	else
	 {
	if(b>c)
	printf("b is greater");
	else
	printf("c is greater");
}
}
