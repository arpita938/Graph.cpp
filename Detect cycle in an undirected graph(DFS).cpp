class Solution {
  public:
  bool checkForCycle(int node,int parent,vector<int>&visited,vector<int> adj[]){
      visited[node]=1;
      for(auto i: adj[node]){
          if(visited[i]==0)
          {
             if(checkForCycle(i,node,visited,adj))
             return true;
          }
          else if(i!=parent)
          return true;
      }
      return false;
  }
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        vector<int>visited(V+1,0);
        for(int i=0;i<V;i++){
            if(!visited[i]){
                if(checkForCycle(i,-1,visited,adj))
                return true;
            }
        }
        return false;
    }
};
