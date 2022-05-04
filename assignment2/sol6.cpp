#include<bits/stdc++.h>

using namespace std;

int main(){
vector<int>A = {4,5,6,7,7,9,8,9};
int n= A.size();
int maxnum = 0;
int max2num = 0;
for (int i = 0; i<n; i++){

    if(A[i]>=maxnum){
        max2num = maxnum;
        maxnum = A[i];
    }

    else if (A[i]<maxnum && A[i]>max2num){
       max2num = A[i];
     }
  } 
    cout<<maxnum<<" "<<max2num;
}
