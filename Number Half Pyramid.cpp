#include<iostream>
using namespace std;
int main()
{
	int number;
	cout<<"Number Half Pyramid."<<endl;
	cout<<"Enter any number: ";
	cin>>number;
	for(int i=0;i<=number;i++)
	{
		for(int y=0;y<=i;y++)
		{
			cout<<" "<<i<<" ";
		}
		cout<<endl;
	}
	return 0;
}
