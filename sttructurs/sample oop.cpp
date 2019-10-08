/*#include <iostream>
using namespace std;
class temp
{
 private:
 int data1;
 float data2;
 public:
 void idata(int d){
 data1=d;
 cout<<"Number: "<<data1;
 }
 float fdata(){
 cout<<"\nEnter data: ";
 cin>>data2;
 return data2;
 }
};
 int main()
 {
 temp obj1, obj2;
 obj1.idata(12);
 cout<<"You entered "<<obj2.fdata();
 return 0;
}*/
 #include<iostream>
using namespace std;
class data
{
	private:
		int data1;
		float data2;
	public:
		void idata(int d)
		{
			data1=d;
			cout<<"data="<<data1;
		}
		float fdata()
		{
			cout<<"enter the data";
			cin>>data2;
			return data2;
		}
};
int main()
{
	int p;
	cout<<"hi there";
	data o1,o2;
	o1.idata(12);
	p=o2.fdata();
	cout<<"enter data f "<<p;
}
