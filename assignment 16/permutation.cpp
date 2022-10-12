class Solution {
public:
       vector<vector<int>> ans;
        
    void rec(vector<int> &nums, int n){
        
        if(n==nums.size()) {
            ans.push_back(nums);
            return;
        }
        else{
            for(int i=n;i<nums.size();i++){
                swap(nums[i],nums[n]);
                rec(nums,n+1);
                swap(nums[i],nums[n]);
            }
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        rec(nums,0);
        return ans;
    }

};




