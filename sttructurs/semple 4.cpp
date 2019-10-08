#include<iostream>
using namespace std;
class complex
{
	
	private:
		int a,b;
	public:   
			complex(int x,int y)
		{
			a=x;
			b=y;
			cout<<a<<b;
		}
		
};
int main()
{
	complex c1= complex (5,4);
	return 0;
}
