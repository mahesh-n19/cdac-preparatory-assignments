#include<iostream>

using namespace std;

int main()
{
    int n ;
    cout<<"\n Enter n : ";
    cin>>n;

    int maxNum = INT_MIN;

    int num;
    for(int i=0;i<n;i++)
    {
        cout<<"Num "<<i+1<<" : ";
        cin>>num;

        if(num>maxNum)
            maxNum = num;
    }

    cout<<"\n Max Number : "<<maxNum;

    return 0;
}
