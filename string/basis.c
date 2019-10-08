/*#include<stdio.h>
void main()
{
	char a[20];
	int i;
	printf("enter the number");
	//gets(a);
	//puts(a);
	for(i=0;a[i]!='\0';i++)
	{
		printf("%c",a[i]);
	}
	
}*/
#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

int n;
string num[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
int main() {
    cin >> n;
    if (n < 10)
        cout << num[n - 1] << endl;
    else
        cout << "Greater than 9" << endl;
    return 0;
}
