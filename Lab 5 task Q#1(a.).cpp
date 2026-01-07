#include<iostream>
using namespace std;
int main()
{
	int Student_Attendence;
	int feePaid;
	cout<<"Student Attendence:"<<endl;
	cin>>Student_Attendence;
	cout<<"Feepaid:"<<endl;
	cin>>feePaid;
	cout<<((Student_Attendence>=75 && feePaid==1)? "Eligible":"Not Eligible");
	return 0;
}