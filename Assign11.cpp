#include<iostream>

using namespace std;

struct Employee
{
    string firstName;
    string lastName;
    double salary;


};

void emp_init(struct Employee*e)
{


    cout<<"\n Enter First name : ";
    cin>>e->firstName;
    cout<<"\n Enter Last name : ";
    cin>>e->lastName;
    cout<<"\n Enter Salary : ";
    cin>>e->salary;

}

void emp_display(struct Employee*e)
{

    cout<<"\n Employee Name : "<<e->firstName<<" "<<e->lastName;
    cout<<"\n Salary : "<<e->salary;
}

void set_salary(struct Employee*e,double sal)
{
    e->salary =  sal ;

    cout<<"\n Employee Salary incremented successfully !!!";
}

int main()
{

    struct Employee emp1,emp2;

    cout<<"\n Enter Employee 1 details : ";
    emp_init(&emp1);
    cout<<"\n Enter Employee 2 details : ";
    emp_init(&emp2);

    cout<<"\n Employee 1 details : ";
    emp_display(&emp1);

    cout<<"\n Employee 2 details : ";
    emp_display(&emp2);

    int salIncr = emp1.salary+emp1.salary*0.1;
    set_salary(&emp1,salIncr);

    salIncr = emp2.salary + emp2.salary*0.1;
    set_salary(&emp2,salIncr);

    cout<<"\n Employee 1 details after increment : ";
    emp_display(&emp1);

    cout<<"\n Employee 2 details after increment : ";
    emp_display(&emp2);

    return 0;
}
