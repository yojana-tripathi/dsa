#include <bits/stdc++.h>

using namespace std;

vector<int>arr(100,0);
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int m;
        cin>>m;
        arr[m]=arr[m]+1;
    }
    for(int i=0;i<arr.size();i++){
        for(int j=0; j<arr[i]; j++){
            cout<<i<<" ";
        }
    }
    return 0;
}  
   
