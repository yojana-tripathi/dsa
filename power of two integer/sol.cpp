/* Q:
Given a positive integer which fits in a 32 bit signed integer, find if it can be expressed as A^P where P > 1 and A > 0. 
A and P both should be integers.
*/
int Solution::isPower(int n) {
    if(n==1) return 1;
    int hcf=0;
    for(int i=2;i<=n;i++){
        int k=0;
        while(n%i==0){
            k++;
            n=n/i;
        }
        if(k>0){
            if(hcf==0) hcf =k;
            else hcf = __gcd(hcf,k);
        }
    }
    return hcf>1;
}
