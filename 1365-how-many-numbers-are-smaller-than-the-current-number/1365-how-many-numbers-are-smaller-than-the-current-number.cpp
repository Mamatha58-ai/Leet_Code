class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>res ;
        vector<int> temp = nums;
        sort(temp.begin(),temp.end());
        // for(int i = 0 ; i < nums.size() ; i++){
        //     for(int j = 0 ; j < nums.size(); j ++ ){
        //          if(i == j) continue;
        //         else if(nums[i] > nums[j]){
        //                 noofsmall ++;
        //             }
        //     }
        //        ans.push_back(noofsmall); 
        //        noofsmall = 0;
        // }
        unordered_map<int , int > m;
        for(int i = 0 ; i < nums.size() ; i ++){
            if(m.find(temp[i]) == m.end()){
                m[temp[i]] = i;
            }
        }
        for(int i = 0 ; i < nums.size() ; i++){
            res.push_back(m[nums[i]]);
        }

        return res;
    }
};