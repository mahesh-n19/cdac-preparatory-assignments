#include<iostream>
#include<map>


using namespace std;

int main()
{
    string str;
    map<char,int> dataMap = {{'U',0},{'L',0}, {'D',0}, {'O',0} };

    cout<<"\n Enter a string : ";
    getline(cin,str);

   for(int i=0;i<str.length();i++)
    {
        int s = (int) str[i];

        if(s>=97 && s<=122)
        {
            dataMap['L'] = dataMap['L']+1;
        }
        else if(s>=65 && s<=90)
        {
            dataMap['U'] = dataMap['U']+1;
        }
        else if(s>=48 && s<=57)
        {
            dataMap['D'] = dataMap['D']+1;
        }
        else
        {
            dataMap['O'] = dataMap['O']+1;
        }

    }

    cout<<"Uppercase letters : "<<dataMap['U']<<endl;
    cout<<"Lowercase letters : "<<dataMap['L']<<endl;
    cout<<"Digits : "<<dataMap['D']<<endl;
    cout<<"Other characters : "<<dataMap['O']<<endl;

    return 0;
}
