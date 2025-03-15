int reverse(int x){
    long long sum=0,rem;
  while(x!=0){
    sum=sum*10+(x%10);
    x=x/10;
  } if(sum>INT_MAX || sum<INT_MIN){
    return 0;
  }
  return sum;
}