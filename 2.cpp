#include<iostream>
#include<string>
#include<ctype.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    for(char i:s)
    {
        if(islower(i))
        {
            cout<<(char)toupper(i);
        }
        else if(isupper(i))
        {
            cout<<(char)tolower(i);
        }
    }
    
    return 0;
}
