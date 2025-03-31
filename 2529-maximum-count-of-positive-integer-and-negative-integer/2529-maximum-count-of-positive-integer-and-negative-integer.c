int maximumCount(int* nums, int numsSize) {
    int n_cnt=0 , p_cnt=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]<0){
            n_cnt++;
        }
        else if(nums[i]>0){
            p_cnt++;
        }
    }
    int max;
    return max = n_cnt > p_cnt ? n_cnt : p_cnt ;
}