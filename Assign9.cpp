#include<iostream>
#include<bitset>

using namespace std;

int main()
{
    int num;

    cout<<"\n Enter number : ";
    cin>>num;

    cout<<"\n Given number : "<<num;
    cout<<"\n Binary equivalent : "<<bitset<8>(num);
    cout<<"\n Octal equivalent : "<<oct<<num;
    cout<<"\n Hexadecimal equivalent : "<<hex<<num;

    return 0;
}
