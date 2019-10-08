#include<stdio.h>
void main()
{

	int cont = 1;
	while(cont == 1)
	{
		int choice,a,i,p,f=1,sum=0;
		printf("\nenter your choice\n");
		printf("1.factorialof number\n");
		printf("2.prime or not\n");
		printf("3.odd or even\n");
		printf("any other to exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("enter the number\n");
				scanf("%d",&a);
				for(i=1;i<=a;i++)
				{
					f = f*i;
				}
				printf("%d",f);
				break;
			case 2:
				printf("enter the number\n");
				scanf("%d",&a);
				for(p=1;p<=a;p++)
				{
					if(a%p==0)
					{
						sum++;
					}
				}
				if(sum==2)
					printf("prime number, sum=%d\n",sum);
				else
					printf("not a prime number=%d\n", sum);
				break;
			case 3:
				printf("enter the number\n");
				scanf("%d",&a);
				if(a%2==0)
					printf("even number\n");
				else
					printf("odd number \n");
				break;
			default:
				cont = 0;

		}

	}
}
