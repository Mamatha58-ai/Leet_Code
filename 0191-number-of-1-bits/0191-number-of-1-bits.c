int hammingWeight(int n) {
    int setbit=0;
    while(n!=0){
       int r = n % 2 ;
       if(r == 1){
        setbit ++;
       }
       n /=2;
    }
    return setbit;
}