#include<iostream>
using namespace std;
int sum(int num1,int num2);
int main()
{
	
	cout<<sum(0,0);
}
inline int sum(int num1,int num2)
{
	cout<<"enter two numbers:";
	cin>>num1>>num2;
	return num1+num2;
}
