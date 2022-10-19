class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int l = nums.size();
        if(nums == NULL || nums.size() == 0){
            return false;
            
        }
        for (int i=0; i<l; i++) {
            for (int j=i+1; j<l; j++) {
                if (nums[i] == nums[j]) {
                    return true;
                }
            }
        }
        return false;
    }

};
