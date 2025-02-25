#include<iostream>

using namespace std;

int factorial(int n)
{
    if(n == 0)
        return 1;
    return n*factorial(n-1);
}

int main()
{
    int n ;

    cout<<"\n Enter a number : ";
    cin>>n;

    int fact = factorial(n);

    cout<<"\n Factorial of "<<n<<" : "<<fact;

    return 0;
}
