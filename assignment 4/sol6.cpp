class Solution {
public:
    bool isPalindrome(int x) {
        int y = x;
        long sum =0;
        while (x>0){
            sum = sum*10+x%10;
            x = x/10;    
        }
        if (y == sum) return 1;
    return 0;
    }
};
