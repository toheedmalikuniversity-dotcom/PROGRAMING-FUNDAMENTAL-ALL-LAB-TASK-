#include<iostream>
using namespace std;
int main()
{
	int Recharge;
	float Bonus=0.10;
	cout<<"Recharge:";
	cin>>Recharge;
	Bonus*=Recharge;
	Recharge+=Bonus;
	cout<<"Updated Balance:"<<Recharge;
	return 0;
}