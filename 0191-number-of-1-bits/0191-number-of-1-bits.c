int hammingWeight(int n) {
    int setbit=0;
    while(n>0){
        n &=(n-1);
        setbit++;
    }
    return setbit;
}