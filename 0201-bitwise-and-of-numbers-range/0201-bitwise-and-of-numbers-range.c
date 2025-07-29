int rangeBitwiseAnd(int left, int right) {
    int result_cnt = 0;
    while(left!= right){
       left = left >> 1;
   right = right >> 1;
   result_cnt ++;
    }
    return left << result_cnt ; 
}