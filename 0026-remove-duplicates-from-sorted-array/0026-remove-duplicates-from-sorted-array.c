int removeDuplicates(int* nums, int n) {
   int i =0;
   for(int j = 0 ; j < n ; j++ ){
    if(nums[j] != nums[i]){
        i++;
        nums[i] = nums[j];
    }
   }
   return i+1;
}