class Solution {
public:
    bool isPerfectSquare(int num) {
        int low = 1, high =num;
        long mid ;
        while(low<=high){
            mid = low +(high-low)/2;
            long z = mid*mid;
            if(z==num){
                return true;
            }
            else if(z>num){
             high=mid-1;
            }
            else
                low=mid+1;
            }
        return false;
    }

};
