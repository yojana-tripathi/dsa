#include<bits/stdc++.h>
using namespace std;

int main() {
      int n;
      cin>>n;
      int biggest = 0;
      int a[100000];
      for (int i = 0; i <n; i++) {
          cin>>a[i];
          biggest = max(biggest,a[i]);
  }
     int count = 0;
     for ( int i = 0; i < n; i++){
        if (a[i] == biggest){
            count++;
        }
            
     } 
    cout<<count;
    return 0;
}
