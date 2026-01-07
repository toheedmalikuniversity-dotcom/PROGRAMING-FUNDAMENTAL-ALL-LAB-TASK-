#include<iostream>

using namespace std;

int main()
{
string name;
int roll_no;
string department;
float English, math, physics;


cout << "=================================================\n";
cout << "\t\n" ;
cout << "\t\tSTUDENT RESULT CARD\t\n" ;
cout << "\t\n" ;
cout << "=================================================\n" ;
cout << "\t\n";

cout << "Name:\t\t"; getline(cin, name);
cout << "Roll No:\t";cin >> roll_no;
cin.ignore();
cout << "Department:\t"; getline(cin, department);

cout << "\t\n";
cout << "-------------------------------------------------\n";
cout << "\t\n";
cout << "Subjects\tMarks\t\n";
cout << "\t\n";
cout << "-------------------------------------------------\n";
cout << "\t\n";

cout << "English:\t";cin >> English;
cout << "Math:\t\t";cin >> math;
cout << "Physics:\t";cin >> physics;
cin.ignore();

cout << "\t\n";
cout << "-------------------------------------------------\n";
cout<< "\t\n";

float Total_Marks = English + math + physics;
cout << "Total Marks:\t"<< Total_Marks <<"/300\n";

float Percentage = Total_Marks/300*100;
cout << "Percentage:\t" << Percentage<<"%";

cout << "\t\n" ;
cout << "\t\n" ;
cout << "=================================================\n";

string grade ;
if (Percentage >= 80) {
    grade = "A+";
} else if (Percentage >= 70) {
    grade = 'A';
} else if (Percentage >= 60) {
    grade = 'B';
} else if (Percentage >= 50) {
    grade = 'C';
} else {
    grade = 'Fail';
}

cout << "\t\n";
cout << "Grade:\t\t" << grade<< "\n";
cout << "\t\n";

cout << "================================================\n";

cout << "\n";

cout << "================================================\n";
cout << "\t";
cout << "\tToheed Irfan Congratulations\t\n";
cout << "\t" ;
cout << "================================================\n";
return 0;
}