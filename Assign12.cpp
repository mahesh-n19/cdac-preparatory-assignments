#include<iostream>

using namespace std;

string reversedString(string);

int main()
{
    string str ;

    cout<<"\n Enter a string : ";
    getline(cin,str);

    cout<<"\n Given string : "<<str;

    string reverseString = "" ;
    reverseString = reversedString(str);

    cout<<"\n Reversed string : "<<reverseString;

    return 0;
}

string reversedString(string str)
{

    int strLen = str.length();

    int startPtr = 0 ;
    int endPtr = strLen-1;

    while(startPtr<endPtr)
    {
        char temp = str[startPtr];
        str[startPtr] = str[endPtr];
        str[endPtr] = temp;

        startPtr++;
        endPtr--;
    }




    return str;

}
