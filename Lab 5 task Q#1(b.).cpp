#include<iostream>
using namespace std;
int main()
{
	int Purchase_Amount;
	int Membership_Card;
	cout<<"Purchase Amount:"<<endl;
	cin>>Purchase_Amount;
	cout<<"Have Membership Card:"<<endl;
	cin>>Membership_Card;
	cout<<((Purchase_Amount>5000 || Membership_Card==1)? "Discount Applied" : "No Discount");
	return 0;
}