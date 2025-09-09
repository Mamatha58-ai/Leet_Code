class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int n = nums.size();
    if(n <= 2) return -1;
    auto it = minmax_element(nums.begin(),nums.end());
          int mini = *it.first;
          int maxi = *it.second;
        
          int ans = 0;
        for(int val : nums)
        {
            if(val != mini && val != maxi)
            {
                ans = val;
                break;
            }
        }
        return ans;
    }
};