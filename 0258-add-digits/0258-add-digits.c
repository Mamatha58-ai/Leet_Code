int addDigits(int num) {
     if(num<=9) 
     {return num;
     }
  while(num>9){
    int sum=0,rem;
    while(num!=0){
        rem=num%10;
        sum=sum+rem;
        num=num/10;
        }
        num=sum;
   }
   return num;
}
