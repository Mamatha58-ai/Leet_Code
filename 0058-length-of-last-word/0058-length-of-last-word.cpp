class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt = 0 ;
        int precnt = 0;
        for(int c : s){
            if(c == ' '){ 
                if(cnt!=0){
               precnt = cnt;
                cnt = 0;
                }
            }
            else
              cnt ++;

        }
        if(cnt == 0) return precnt;
        return cnt;
    }
};