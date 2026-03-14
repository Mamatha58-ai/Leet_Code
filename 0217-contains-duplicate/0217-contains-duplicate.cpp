class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        map<int ,int>frq ;
        for(int c : nums) frq[c] ++;
        for(auto & c : frq){
            if(c.second >=2) return true;
        }
        return false;
    }
};