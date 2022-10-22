class Solution {
public:
    int firstBadVersion(int n) {
        int first = 1;
        int last = n;
        int pos = 1;
        while(first<=last){
            int mid = first+(last-first)/2;
            bool x = isBadVersion(mid);
            if(x == true){
                pos = mid;
                last = mid-1;
            }
            else{
                first = mid+1;
            }
            
        }
          return pos;
    }
};
