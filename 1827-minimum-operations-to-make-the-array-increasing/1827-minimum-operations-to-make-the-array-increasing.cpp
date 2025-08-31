class Solution {
public:
    int minOperations(vector<int>& nums) {
        int operations = 0;
        if(nums.size() == 1) return 0;
        for(int i = 0; i < nums.size()-1; i ++){
            int add = 0 ;
             if(nums[i] >=nums[i+1]){
                 add = nums[i] - nums[i+1]+1;
                 operations +=add;
                nums[i+1] = nums[i+1]+add;
                
            }
        }
        return operations;
    }
};