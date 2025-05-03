int removeElement(int* nums, int numsSize, int val) {
    int k =0;
        for(int i = 0 ; i < numsSize ; ){
        if(nums[i]==val){
            for(int k= i ; k < numsSize-1 ; k++){
                nums[k] = nums[k+1];
            }
            numsSize--;
        }
        else {
            i++;
        }
    }
    return numsSize;
}