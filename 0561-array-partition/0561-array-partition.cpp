class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin() ,nums.end());
        int minisum = 0;
        for(int i = 0 ; i < nums.size() - 1 ; i+=2){
            int mini = nums[i];//array is sorted so minimum eliment at the even indexes
            minisum +=mini;
        }
        return minisum;
    }
};