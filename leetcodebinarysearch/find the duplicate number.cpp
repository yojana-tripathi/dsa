class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       int left = 1, right = nums.size();

        while (left <= right) {
            const int mid = left + (right - left) / 2;
            // Get count of num <= mid.
            int count = 0;
            for (const auto& num : nums) {
                if (num <= mid) {
                    ++count;
                }
            }
            if (count > mid) {
                right = mid - 1; 
            } else {
                left = mid + 1;
            }
        }
        return left;
    }
};
