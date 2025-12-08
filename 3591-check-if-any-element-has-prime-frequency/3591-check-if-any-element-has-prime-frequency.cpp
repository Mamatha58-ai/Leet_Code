class Solution {
public:
bool isprime(int f){
    if(f < 2) return false;
    for(int i = 2 ; i *i <= f ; i++){
        if(f%i == 0)return false;
    }
    return true;
}
    bool checkPrimeFrequency(vector<int>& nums) {
        map<int,int> p;
        for(int c:nums){
            p[c] ++;
        }
        for(auto k:p){
            int f = k.second;
            if(isprime(f)) return true;
        }
return false;
    }
};