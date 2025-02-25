#include<iostream>
#include<map>

using namespace std;

int main()
{
    map<char,int> alphaMap;

    string data ;

    cout<<"\n Enter a string : ";
    getline(cin,data);
    cout<<"\n Entered string : "<<data;


    int stringLen = data.length();

    for(int i=0;i<stringLen-1;i++)
    {
        if( alphaMap.count(data[i]) > 0)
        {
            alphaMap[data[i]] = alphaMap[data[i]] + 1 ;
        }
        else
        {
            alphaMap[data[i]] = 1;
        }
    }

    cout<<endl;

    for(auto itr=alphaMap.begin(); itr!=alphaMap.end(); itr++)
    {
        cout<<itr->first<<" : "<<itr->second<<endl;
    }

    return 0 ;
}
