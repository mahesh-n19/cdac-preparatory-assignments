#include<iostream>

using namespace std;

int main()
{

    int n;
    cout<<"\n Enter n : ";
    cin>>n;

    int first = 0;
    int second = 1;

    cout<<"\n Fibbonacci series of "<<n<<" terms : "<<first<<" "<<second<<" ";

    for(int i=0;i<n-2;i++)
    {
        int third = first + second ;
        cout<<third<<" ";
        first = second;
        second = third;

    }

    return 0;
}
