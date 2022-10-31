
int migratoryBirds(vector<int> arr) {
   vector<int>b(11,0);
    for (int i=0; i<arr.size(); ++i){
        b[arr[i]]++;
    }
    
    int c = 0;
    int max_val = 0;
    for(int i = 0; i<b.size(); i++){
        if(b[i]>max_val){
            c = i;
            max_val = b[i];
            
        }
    }
     return c;

}
