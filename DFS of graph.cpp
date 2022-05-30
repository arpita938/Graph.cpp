class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int>ans;
        vector<bool>visited(V,false);
        dfs(ans,visited,adj,0);
        return ans;
    }
    void dfs(vector<int>&ans, vector<bool>&visited,vector<int> adj[],int node){
        //base case
        if(visited[node])
        return;
        
        ans.push_back(node);
        visited[node]=true;
        for(auto i:adj[node]){
            dfs(ans,visited,adj,i);
        }
        
    }
};
