/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    
   for(int i=0;i<numsSize;i++){
    for(int j=i+1;j<numsSize;j++){
        if(nums[i]+nums[j]==target){
            int *ans=(int *)malloc(2*sizeof(int));
            ans[0] = i;
            ans[1]  = j;
            *returnSize=2;
            return ans;
        }
    }
   } 
   return NULL;
  // return malloc(0*sizeof(int));
}