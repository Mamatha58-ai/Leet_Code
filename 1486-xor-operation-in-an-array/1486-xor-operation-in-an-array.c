int xorOperation(int n, int start) {
    int *nums = (int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        nums[i]=start+2*i;
    }
    int result=0;
    for(int i=0;i<n;i++){
       result ^= (nums[i]);
    }
    return result;
}