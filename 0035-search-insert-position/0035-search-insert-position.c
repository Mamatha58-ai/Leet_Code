int searchInsert(int* nums, int numsSize, int target) {
    int index = 0;
    for(int i = 0 ; i< numsSize ; i++){
        if(nums[i]==target){
            index = i ;
        }
        else {
            if(nums[i]<target){
                index = i+1;
            }
        }
    }
    return index ;
}