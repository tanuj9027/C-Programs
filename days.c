#include<stdio.h>
void main()
{
	int i,year=0,n;
	printf("enter the year");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
      if(((i%4)==0)&&((!(i%100)==0))||((i%400)==0))
      year++;
	}
     int days=year*366+(n-year)*365;
     int temp=days%7;
	 switch(temp)
	 {
	 	case 1:
	 		printf("Monday");
	 		break;
	 		case 2:
	 			printf("Tuesday");
	 			break;
	 			case 3:
	 				printf("Wednesday");
	 				break;
	 				case 4:
	 					printf("Thrusday");
	 					break;
						 case 5:
	 						printf("friday");
	 						break;
							 case 6:
	 							printf("Saturady");
	 							break;
	 							case 0:
	 								printf("Sunday");
	 								break;
	 			
		 }	
}
