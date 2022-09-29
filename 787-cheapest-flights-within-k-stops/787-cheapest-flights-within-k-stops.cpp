class Solution {
public:
    
    void bfs(vector<pair<int,int>> adj[],map<int,int> &dp, int k, int src){
        queue<pair<int,int>> q;
        dp[src]=0;
        q.push({src,0});
        int cnt=0;
        while(!q.empty() && cnt < k+1){
            int sz=q.size();
            for(int i=0;i<sz;i++){
                auto it=q.front();
                q.pop();
                int node=it.first;
                int cost=it.second;
                for(auto x:adj[node]){
                    if(cost + x.second < dp[x.first]){
                        dp[x.first]=cost+x.second;
                        q.push({x.first,dp[x.first]});
                    }
                }
            }
            cnt++;
        }
    }
    
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<pair<int,int>> adj[n];
        for(int i=0;i<flights.size();i++){
            adj[flights[i][0]].push_back({flights[i][1],flights[i][2]});
        }
        map<int,int> dp;
        for(int i=0;i<n;i++)dp[i]=INT_MAX;
        bfs(adj,dp,k,src);
        if(dp[dst] == INT_MAX)return -1;
        return dp[dst];
    }
};