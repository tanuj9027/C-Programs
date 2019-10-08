#include<stdio.h>
void main()
{
	void input(int *);
	void display(int*);
	void sorting(int *);
	int a[5];
	input(a);
	display(a);
	sorting(a);
	display(a);
}
void input(int *p)
{
	int i;
	for(i=0;i<=4;i++)
	{
		scanf("%d",p+i);
	}
}
void display(int *p)
{
	int i;
	for(i=0;i<=4;i++)
	{
		printf("%d",*(p+i));
	}
}
void sorting(int *p)
{
	int i,round,t;
	for(round=0;round<=4;round++)
	{
		for(i=0;i<=4-round;i++)
		{
			if(*(p+i)>*(p+i+1))
			{
				t=*(p+i);
				*(p+i)=*(p+i+1);
				(*(p+i+1)=t);
			}
		}
	}
}

