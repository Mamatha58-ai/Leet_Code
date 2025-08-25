class Solution {
public:
    bool isPathCrossing(string path) {
        unordered_map<char , pair<int,int>> moves ;
        moves['N'] ={0,1};
        moves['S'] ={0,-1};
        moves['E'] ={1,0};
        moves['W'] ={-1,0};
       set<pair <int , int>>visit;
       visit.insert({0,0});
       int x = 0;
       int y = 0;
       for(char c:path){
         pair<int,int>cur = moves[c];
            int dx = cur.first;
            int dy = cur.second;
             x +=dx; 
             y +=dy;
        // string hash = to_string(x)+","+to_string(y);
        if(visit.find({x,y}) != visit.end()){
            return true;
        }
        visit.insert({x,y});
       }
      return false;
    }
};