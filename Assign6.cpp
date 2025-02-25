#include<iostream>

using namespace std;

int main()
{
    int m,n,x,y;

    cout<<"\n Enter no. of rows of matrix 1: ";
    cin>>m;
    cout<<"\n Enter no. of columns of matrix 1  : ";
    cin>>n;

    cout<<"\n Enter no. of rows of matrix 2: ";
    cin>>x;
    cout<<"\n Enter no. of columns of matrix 2  : ";
    cin>>y;

    if(n != x)
    {
        cout<<"\n Matrix multiplication is not possible ";
    }
    else
    {
        int A[5][5],B[5][5], C[5][5];

        cout<<"\n Enter matrix 1 : ";
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>A[i][j];
            }
        }

        cout<<"\n Enter matrix 2 : ";
        for(int i=0;i<x;i++)
        {
            for(int j=0;j<y;j++)
            {
                cin>>B[i][j];
            }
        }

        for(int i=0;i<m;i++)
        {

            for(int j=0;j<n;j++)
            {
                for(int k=0;k<y;k++)
                {
                    C[i][j] = A[i][k]*B[k][j] + C[i][j];
                }
            }
        }

        cout<<"\n Resultant matrix : \n ";
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<y;j++)
            {
                cout<<C[i][j]<<" ";
            }
            cout<<endl;
        }

    }


    return 0;
}
