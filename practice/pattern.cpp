#include<bits/stdc++.h>
  using namespace std;
int main(){
    int n;
    cin>>n;
    int j=1;
    for(int i=n; i>0; i=i-2){
        while(j<=n){
            cout<<j%2;
            j++;
        }
    }
    cout<<endl;
}
