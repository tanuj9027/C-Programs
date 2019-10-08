#include<iostream>
using namespace std;
class person
{
	public:
	char name[20];
	int age;
	public:
	void getdata();
	void display();
};
void person :: getdata()
{
	cout<<"entre the name";
	cin>>name;
	cout<<"enter age";
	cin>>age;
	
}
void person::display()
{
	cout<<name;
	cout <<age;
	
}
int main()
{
	person p;
	p.getdata();
	p.display();
	return 0;
}
