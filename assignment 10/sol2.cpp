class Solution {
public:
    int mySqrt(int x) {
        int lower = 0, upper = x;
        long mid;    // x=8; s=
        while(lower<=upper){
            mid = lower+(upper-lower)/2;
            
            long long s = mid*mid;
            if(s==x){
                return mid;
            }
            else if(x>s && x<(mid+1)*(mid+1)){
                return mid;
                
            }
            if(s>x){
                upper= mid-1;
            }
              
            else{
                lower=mid+1;
            }
             
        }
        
       return 0;
    }
        
};
