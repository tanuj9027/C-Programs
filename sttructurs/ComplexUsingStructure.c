#include<stdio.h>
struct complex
{
	int real;
	float img;
};
void add(struct complex com1,struct complex com2,struct complex *sum1)
{
	sum1->real=com1.real+com2.real;
	sum1->img=com1.img+com2.img;
	printf("\nsum is %d \n %f",sum1->real,sum1->img);
	
	
}
void main()
{
	struct complex c1,c2,sum;
	printf("enter the two real number\n");
	scanf("%d %d",&c1.real,&c2.real);
	printf("enter the two value of imaginary\n");
	scanf("%f %f",&c1.img,&c2.img);
	add(c1,c2,&sum);
}
