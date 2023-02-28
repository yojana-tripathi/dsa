class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
     vector<int>ans;
     int start = 0;
     int end = nums.size()-1;
     int mid;
     int leftindex = -1, rightindex = -1;
     while(start<=end){
         mid = (end+start)/2;
         if(nums[mid]>target) end = mid-1;
          else if(nums[mid]<target) start = mid+1;
         else{
         leftindex = mid;
         end = mid-1;
         }
     }

      start = 0;
      end = nums.size()-1;
         while(start<=end){
             mid = (end+start)/2;
             if(nums[mid]>target) end = mid-1;
              else if( nums[mid]<target) start = mid+1;
             else{
             rightindex = mid;
             start = mid+1;
             }
         }

         ans.push_back(leftindex);
         ans.push_back(rightindex);
         return ans;
    }
};

