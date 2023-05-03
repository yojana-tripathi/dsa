class Solution {
public:
    int subtractProductAndSum(int n) {
        int p = 1 , sum = 0;
        
        while(n>0){
            p*= n%10;
            sum+= n%10;
            n = n/10;
        }
        
        return  p - sum;
        
    }
    
   
    
};

second solution 
class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0, p = 1, digit;
        while(n>0){
            digit = n%10;
                sum = sum +digit;
                p = p *digit;
                n = n/10;
        }
        return p-sum;
        
    }
};
