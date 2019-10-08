#include<stdio.h>
struct distance
{
	int feet;
	float inch;
};
void add(struct distance d,struct distance e,struct distance *sum1)
{
	sum1->feet = d.feet+d.feet;
	sum1->inch=e.inch+e.inch;
	printf("\n");
	printf("%d %f",sum1->feet,sum1->inch);
	
}
void main()
{
	struct distance d1,d2,sum;
	printf("enter the distance in feet\n");
	scanf("%d %d",&d1.feet,&d2.feet);
	printf("enter the daitance in inches \n");
	scanf("%f %f",&d1.inch,&d2.inch);	
	
	 add(d1,d2,&sum);
}
