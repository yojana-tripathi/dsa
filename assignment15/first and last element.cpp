class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>res;
        int low = 0 ;
        int high = nums.size()-1;
         int  f = -1 ,l = -1;
        while(low <= high){
            int mid = low+(high-low)/2;
            if(target==nums[mid]){
                 f =  mid;
                high = mid-1;
            }
            else if(target < nums[mid]){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
            
  }
        res.push_back(f);
        
         low = 0;
         high = nums.size()-1;
        
        while(low<= high){
            int mid = low+(high-low)/2;
            if(target== nums[mid]){
                l = mid;
                low = mid+1;
            } 
            else if(target < nums[mid]){
                 high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        
        res.push_back(l);
        
         return res;
        
    }

    
};
