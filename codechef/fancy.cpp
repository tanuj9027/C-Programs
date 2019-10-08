#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	string cha="not";
	int t,i;
	cin>>t;
	for(i=1;i<t;i++)
	{
	getline(cin, str);
	cout<<str;
	}
	return 0;
}

