#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s = to_string(n);
    for(int i=1; i<=s.size(); i++){
        int x = n%10;
        n = n/10;
        for(int j=1; j<=x; j++){
            cout<<"#";
        }
        cout<<"\n";
    }
}
