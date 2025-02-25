#include<iostream>

using namespace std;

int main()
{
    int n = 5 ;

    int total=0;
    string grade;

    cout<<"\n Enter marks of 5 subjects : ";
    for(int i=0;i<n;i++)
    {
        int marks;
        cin>>marks;
        total += marks;
    }

    if(total >= 90)
    {
        grade = "Ex";
    }
    else if(total<90 && total>=80)
    {
        grade = "A";
    }
    else if(total<80 && total>=70)
    {

        grade = "B";
    }
    else if(total<70 && total>=60)
    {
        grade = "C";
    }
    else if(total<60 )
    {
        grade = "D";
    }

    cout<<"\n Grade : "<<grade;

    return 0;
}
