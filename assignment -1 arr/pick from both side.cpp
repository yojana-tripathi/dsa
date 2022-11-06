int Solution::solve(vector<int> &A, int B) {
    int first=0;
    int end=0;
    int n=A.size();
    for(int i=n-B;i<n;i++){
        first+=A[i];
    }
    int ans=first;
    for(int i=0;i<B;i++){
        end+=A[i];
        first-=A[n-B+i];
        ans=max(ans,end+first);
    }
    return ans;
}
