bool isPalindrome(int x) {
    long long sum=0;
    int on=x;
    while(x>0){
        int rem=x%10;
     sum=sum*10+rem;
     x=x/10;
    }
    if(on==sum) return true;
    else return false;
}