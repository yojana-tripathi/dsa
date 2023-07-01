class Solution {
public:
     int removeElement(vector<int>& nums, int val) {
        int i = 0, j = 0;
        while(j != nums.size())
            if(nums[j] == val) j++;
            else nums[i++] = nums[j++];
        return i;
    }
};

// second approach

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(nums[i] == val){
                nums[i] = nums[n-1];
                i--;
                n--;
            }
        }
      return n;
        
    }
};
