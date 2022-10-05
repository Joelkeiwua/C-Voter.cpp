//Program to check voter illigibility
#include<iostream>
using namespace std;
int main ()
{
	int age;
	cout<<"enter your age"<<endl;
	cin>>age;
	if(age>=18)
	{
		cout<<"you are ilible to vote"<<endl;
	}
	else
	{
		cout<<"not ilible to vote"<<endl;
	}
	return 0;
}