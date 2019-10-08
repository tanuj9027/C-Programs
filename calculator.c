#include<stdio.h>
#include<calculator.h>

void main()
{
	while(1)
	{
		printf("SELECT \n1) for ADDITION \n2) for SUBTRACTION \n3) for MULTIPLICATION\n");
		int ope, a, b, res;
		scanf("%d",&ope);
		printf("Enter the Numbers to perform operaton\n");
		scanf("%d%d",&a,&b);
		switch(ope)
		{
			case 1:
				res = Add(a,b);
				printf("\n Your Sum is =%d\n",res);
				break;
			case 2:
				res = Sub(a,b);
				printf("\n Your Diff is =%d\n",res);
				break;
			case 3:
				res = Mul(a,b);
				printf("\n Your Multplication is =%d\n",res);
				break;
			default:
				printf("wrong operation\n");

		}

	}
}

