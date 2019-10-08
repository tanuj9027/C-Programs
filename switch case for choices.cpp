#include<stdio.h>
void main()
{
	int choice,a,sum,i;
	printf("enter your choice\n");
	printf("1.factorialof number\n");
	printf("2.prime or not\n");
	printf("3.odd or even\n");
	printf("4.exit\n");
	scanf("%d",&choice);
	switch(choice)
	{
			case 1:
			printf("enter the number\n");
			scanf("%d",&a);
			for(i=1;i<=a;i++)
			{
				sum=sum+a*i
			}
			printf("%d",sum);
			break; 
			case 2:
				printf("enter the number\n");
				scanf("%d",a);
				for(i=1;i<=a;i++)
				{
					if(a%i==0)
					{
						sum++;
					}
					if(sum==2)
					printf("prime number");
					else
				    printf("not a prime number");
				    break;
					case 3:
					printf("enter the number\n");
					scanf("%d",&a);
					if(a%2==0)
					printf("even number");
					else
					printf("odd number");
					break;
					case 4:
						break;
						
		}
				
		}
	}
