class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& ps) {
        int m = ps.size();
        vector<vector<int>>adj(n+1);
        vector<int>inDegree(n+1 , 0);
        queue<int>qu;
        for(auto &p : ps){
            adj[p[1]].push_back(p[0]);
            inDegree[p[0]]++;
        }
        for(int i = 0 ; i < n ; i++){
            if(inDegree[i] == 0){
            qu.push(i);
            }
        }
        int cnt = 0;
        while(!qu.empty()){
            int node = qu.front();
              cnt ++;
              qu.pop();
           for(int neigh : adj[node]){
              inDegree[neigh] --;
              if(inDegree[neigh] == 0){
                qu.push(neigh);
              }
           }
           
        }
        return cnt == n;
       
    }
};