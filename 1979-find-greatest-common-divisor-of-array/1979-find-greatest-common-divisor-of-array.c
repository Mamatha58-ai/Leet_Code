int findGCD(int* nums, int numsSize) {
    int max=nums[0],min=nums[0];
    for(int i=0;i<numsSize;i++){
   if(nums[i]>=max) max=nums[i];
   }
   for(int i=0;i<numsSize;i++){
  if(nums[i]<=min) min=nums[i];
   }
   int lcm=max;
   while(lcm%max!=0 || lcm%min !=0){
    lcm +=max;
   }
   int gcd = (max*min)/lcm;
   return gcd;
   
} 