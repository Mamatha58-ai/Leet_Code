bool isThree(int n) {
    int fact=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            fact++;
        }
    }
    if(fact==3) return true;
    else return false;
}