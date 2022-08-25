class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>m;
        for(string s:arr){
            m[s]++;
        }
        
         int count =0;
        for(string c:arr){
            if(m[c]==1)
                 count++;
            if(count==k)
                return c;
                
        }
        return "";
        
        
    }
};
