#include<iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int compareNames(const void *a, const void *b) {
    return strcmp((const char *)a, (const char *)b);
}
int main()
{
    char StudentNames[10][50] = {"Mahesh","Jayesh","Aatish","Vedant","Atharva","Sarthak","Prashant","Shreya","Anuskha","Ganesh"};

    int n = 10 ;

    qsort(StudentNames, n, 50, compareNames);

    for(int i=0;i<10;i++)
    {
        cout<<StudentNames[i]<<endl;
    }

    return 0;
}
