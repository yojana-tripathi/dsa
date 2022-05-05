#include<bits/stdc++.h>
  using namespace std;

  vector<int>A;
    
  int ap(int a,int d,int n){
      A.push_back(a);
       for(int i=0; i<n;i++){
         a = a+d;
         A.push_back(a);
  
     }
     for(int i = 0; i<n; i++ ){
       cout<<A[i]<<" ";
 
     }
     return 0;
  }

     int main(){
        int x,y,z;
        cin>>x>>y>>z;
        ap(x,y,z);
        return 0;

     }
