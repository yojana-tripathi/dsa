#include<bits/stdc++.h>
   using namespace std;

   int main(){
     long n,p;
     cin>>n;
     vector<int>A;
     for(int i = 0; i<n; i++){
     cin>>p;
     A.push_back(p);
     }
    
    long sum = 0;
    for(int i= 0;i<n; i++)
   {
     sum = sum + A[i];
   } 

     cout<<sum;
   }




    
