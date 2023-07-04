class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int r = m+n-1;
        int left = m-1;
        int right = n-1;
         while(left>=0 && right>=0)
               nums1[r--]=nums1[left]>nums2[right]?nums1[left--]:nums2[right--];
             while(right>=0)
              nums1[r--]=nums2[right--];             
    }
};
