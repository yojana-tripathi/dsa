#include <bits/stdc++.h>
   using namespace std;

   int main(){
       int p,positive=0,negative=0,zero=0;
       vector<int>A;
       double pos,neg,z,n;
       cin>>n;
       for(int i=0;i<n;i++){
           cin>>p;
           A.push_back(p);
           
       }
       for(int i=0;i<n;i++){
           if(A[i]>0){
               positive++;
           }
           else if(A[i]==0){
               zero++;
           }
           else{
               negative++;
           }
       }
       pos=positive/n;
       neg=negative/n;
       z=zero/n;
       
       cout<<fixed<<setprecision(6)<<pos<<"\n";
       cout<<fixed<<setprecision(6)<<neg<<"\n";
       cout<<fixed<<setprecision(6)<<z<<"\n";
    
   }
