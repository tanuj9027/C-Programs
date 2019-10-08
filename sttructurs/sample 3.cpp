#include<iostream>
using namespace std;
class area
{
	private:
		int l,b;
		public:
	void gettext(int a,int c)
	{
		l=a;
		b=c;
		
	}
	void display()
	{
		cout<<l<<b;
	}
	
};
int main()
{
	area a1;
	a1.gettext(5,4);
	a1.display();
	return 0;
}
