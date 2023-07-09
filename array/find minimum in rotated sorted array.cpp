class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
          if(n == 1) return nums[0];
        int l = 0, r = n-1;
        if(nums[l] < nums[r]) return nums[l];
        
        int mid;
        
        while(l <= r){
            mid = (l+r)/2 ;
            if(nums[mid+1] < nums[mid]) return nums[mid+1];
            if(nums[mid] < nums[mid-1]) return nums[mid];
            
            if(nums[mid] < nums[0]){
                r = mid-1;
            }else{
                l = mid+1;
            }
        }
        
        return -1;
    }
};
        
