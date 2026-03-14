class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<int ,int>frq ;
        for(int c : nums){
            frq[c] ++;
        }
        int m_e = 0 ;
        int m_e_s = n/2 ;
        for(auto & c : frq){
            if(c.second > m_e_s)  m_e = c.first ;
        }
        return m_e ;
    }
};