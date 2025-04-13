/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
   * returnSize = numsSize*2;
    int *new_arr  = (int *)malloc(*returnSize * (sizeof(int)));
    for(int i = 0; i< numsSize ;i++) {
        new_arr [i] = nums[i];
     }
     for(int i = 0 ,j =numsSize ; i<numsSize,j< *returnSize ;i++,j++  ){
        new_arr[j] = nums[i];
     }
     return new_arr;
     
}