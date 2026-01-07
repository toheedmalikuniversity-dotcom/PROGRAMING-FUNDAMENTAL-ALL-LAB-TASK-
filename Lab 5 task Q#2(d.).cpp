#include<iostream>
using namespace std;
int main()
{
	float Temperature;
	int Window_Closed;
	cout<<"Temperature:";
	cin>>Temperature;
	cout<<"Is Window Closed:";
	cin>>Window_Closed;
	cout<<((Temperature>30 && Window_Closed==1)? "AC ON" : "AC OFF");
	return 0;
}