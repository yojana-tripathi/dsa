string Solution::convertToTitle(int n) {
    string s="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string ans="";
    while(n>0)
    {
        int a=n%26;
        if(a==0){
            a=26;
            n--;
        }
        ans+=s[a-1];
        n=n/26;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
