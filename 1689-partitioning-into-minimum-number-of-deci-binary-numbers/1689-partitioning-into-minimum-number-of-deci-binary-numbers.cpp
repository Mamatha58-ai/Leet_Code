class Solution {
public:
    int minPartitions(string n) {
        int len = n.size();
        int max_digi = 0;
        for(char val :n){
            int digit = val -'0';
            max_digi = max(max_digi , digit);
        }
      return max_digi;  
    }
};