#include<bits/stdc++.h>
using namespace std;
int main(){
    string x= "0123456789";
        string sum ="";
        int i ,j;
        string a= "123";
        string b = "421";
        i=a.size()-1;
        j=a.size()-1;
        while(i>=0 && j>=0){
            int c  = (a[i] -'0')+(b[j] -'0');
            sum = sum+x[c];
            i--;
            j--;
        }
    reverse(sum.begin(), sum.end());
        cout<<sum;
}
