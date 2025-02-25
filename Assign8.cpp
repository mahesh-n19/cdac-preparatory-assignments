#include<iostream>

using namespace std;

struct Student
{
    string rollNo;
    string studentName;
    int totalMarks;
};

int main()
{

    Student S;
    cout<<"\n Enter student name : ";
    getline(cin,S.studentName);
    cout<<"\n Enter student roll no. : ";
    getline(cin,S.rollNo);
    cout<<"\n Enter total marks : ";
    cin>>S.totalMarks;

    cout<<"\n Name : "<<S.studentName;
    cout<<"\n Roll No. : "<<S.rollNo;
    cout<<"\n Total marks : "<<S.totalMarks;

    return 0;
}
