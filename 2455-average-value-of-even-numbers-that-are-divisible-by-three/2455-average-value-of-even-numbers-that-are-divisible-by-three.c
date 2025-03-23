int averageValue(int* nums, int numsSize) {
    int sum=0,d=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]%3==0 && nums[i]%2==0){
            d++;
            sum +=nums[i];
        }
    }
    if(d==0) return 0;
    else
    return sum/d;
}