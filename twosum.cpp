#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> arr={2,4,5};
    int target=6;
    for(int i=0;i<arr.size();i++)
    {
        for(int j=1;j<arr.size();j++)
        {
            if(target==arr[i]+arr[j]){
                cout<<i<<","<<j;
                break;
            }
        }
    }
    
}
