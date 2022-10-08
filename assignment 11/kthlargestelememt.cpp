class Solution {
public:
    int countSmaller(vector<int>& S, int k){
        int ans=0;
        for(int a:S){
            if(a<=k) ans++;
        }
        return ans;
    }
    
    int findKthLargest(vector<int>& nums, int k) {
        k= nums.size()-k+1;
        int low= -100000, high= 100000;
        int ans=low;
        while(low<=high){
            int mid= (low+high)/2;
            int count= countSmaller(nums,mid);
            if(count>=k){
                ans = mid;
                high= mid-1;
            }
            if(count<k){ 
               low = mid+1; 
            }
        }
       
        return ans;
    }
   
};
