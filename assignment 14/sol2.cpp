#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;
    cin>>n;
        for(int i = 1;i<=n; i++){
            sum +=i;
            for(int j = 0; j<sum; j++){
                cout<<"#";
            }
            cout<<"\n";
        }
}
