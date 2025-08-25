class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0;
        int y = 0;
        // set<pair<int , int>>origin ;
        // origin.insert({0,0});
        for(char c : moves){
            if(c == 'R') x++;
            else if(c =='L') x--;
            else if(c == 'U') y++;
            else y--;
        }
    //    if(origin.find({x,y}) != origin.end()) return true;
    //    else return false;
     return (x == 0 && y == 0)? true :false;

    }
}; 