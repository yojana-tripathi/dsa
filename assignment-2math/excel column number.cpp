int Solution::titleToNumber(string s) {
     int res = 0;
       for(char c: s){
           int z = c - 'A' +1;
           res = res*26 + z;
       }
        return res;
}
