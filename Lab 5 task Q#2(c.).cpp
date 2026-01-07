#include<iostream>
using namespace std;
int main()
{
	int Car_Consumes_Fuel=2;
	int Fuel;
	cout<<"Fuel:";
	cin>>Fuel;
	Fuel-=Car_Consumes_Fuel;
	cout<<"Remaining Fuel:"<<Fuel;
	return 0;
}