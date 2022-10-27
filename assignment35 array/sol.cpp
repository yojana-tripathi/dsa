class Solution {
    public :
  int maxProduct(int[] nums) {
        int n = Integer.MIN_VALUE;;
        int m = Integer.MIN_VALUE;;
        for (int i : nums) {
            if (i >= n) {
                m = n;
                n = i;
            } else if (i >= m) {
                m = i;
            }
        }
        return (--n) * (--m);
    }
};
