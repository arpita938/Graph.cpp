public:
  bool cycleCheck(int node,vector<int> adj[],int vis[],int dfsvis[]){
      vis[node]=1;
      dfsvis[node]=1;
      for(auto i:adj[node]){
          if(!vis[i]){
              if(cycleCheck(i,adj,vis,dfsvis))
              return true;
          }
          else if(dfsvis[i]){
          return true;
          }
      }
      dfsvis[node]=0;
      return false;
      
  }
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
       int vis[V];
       int dfsvis[V];
       memset(vis,0,sizeof vis);
       memset(dfsvis,0,sizeof dfsvis);
       for(int i=0;i<V;i++){
           if(!vis[i]){
               if(cycleCheck(i,adj,vis,dfsvis))
               return true;
           }
       }
       return false;
    }
