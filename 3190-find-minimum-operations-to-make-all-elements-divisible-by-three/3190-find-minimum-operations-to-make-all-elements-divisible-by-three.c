int minimumOperations(int* nums, int n) {
    int operation = 0;
 for(int i=0 ; i<n ; i++){
    if(nums[i]%3!=0) operation++;
 }
 return operation;
}