#include<iostream>
#include<string>
#include<ctype.h>
#include<vector>
#include<set>
using namespace std;

int main()
{
    vector<int> arr;
    int n;
    cin>>n;
    int s;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        arr.push_back(s);
    }
    set<int> sa(arr.begin(),arr.end());
    
    int result=arr.size()-sa.size();
    cout<<result;
    
    return 0;
}
