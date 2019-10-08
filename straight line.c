#include<stdio.h>
void main()
{
	int x1,y1,x2,y2,x3,y3,m1,m2;
	printf("enter the co-ordinate of x1 y1\n");
	scanf("%d%d",&x1,&y1);
	printf("enter the co-ordinate of x2 y2\n");
	scanf("%d%d",&x2,&y2);
	printf("enter the co-ordinate of x3 y3\n");
	scanf("%d%d",&x3,&y3);
	m1=(y2-y1)/(x2-x1);
	m2=(y3-y2)/(x3-x1);
	if(m1==m2)
	{
		printf("it fall on a straight line");
	}
	else{
		printf("it is not lies on straight line");
	}
	
}
