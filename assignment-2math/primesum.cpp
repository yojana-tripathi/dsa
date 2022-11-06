bool isPrime(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    if(n%2==0){
        return 0;
    }
    for(int i=3; i<=sqrt(n); i=i+2){
        if(n%i==0)return 0;
    }
    return 1;
}

vector<int> Solution::primesum(int A) {
   for(int i=2; i<A; i++){
       if(isPrime(i) && isPrime(A-i)){
           return{i, A-i};
       }
   }   
   return{0,0};
}
