#include<iostream>

using namespace std;

int main(){
	int sum;
	float amount;
	cin>>sum;
	cin>>amount;
	if(sum%5==0 && sum<amount)
	{
		amount=(amount-(sum+0.50));
		cout<<amount<<setprecision(2);
	}
	else if (sum%5!=0 && sum<amount)
    {
		cout<<amount<<setprecision(2);
	}
	else if (sum%5==0 && sum>amount)
	{
		cout<<amount<<setprecision(2);
	}
	return 0;
}
