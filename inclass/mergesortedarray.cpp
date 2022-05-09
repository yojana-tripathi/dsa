#include<bits/stdc++.h>
using namespace std;

vector<int>C;
vector<int>mergesortedArray(vector<int>A,vector<int>B){
    int i=0;
    int j=0;
    
    while(i<A.size() && j<B.size()){
        if(A[i],B[j]){
            C.push_back(A[i]);
            i++;
        }
        else{
            C.push_back(B[j]);
               j++; 
        }
    }
    
    while(i<A.size()){
        C.push_back(A[i]);
        i++;
    }
    
    while(j<A.size()){
        C.push_back(B[j]);
          j++;  
    }
   return C; 
 }

int main(){
    vector<int>A={1,2,5,6};
    vector<int>B={1,3,4,7};
    vector<int>C = mergesortedArray(A,B);
    for(int a:C){
        cout<<a<<" ";
    }
}
