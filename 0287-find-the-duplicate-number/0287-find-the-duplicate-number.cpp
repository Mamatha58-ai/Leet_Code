class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       map<int,int>mpp;
       for(auto i:nums){
        mpp[i]++;
       }
       int t;
       for(auto i:mpp){
        if(i.second > 1){
            t=i.first;
            break;
        }
       }
       return t;

    }
};