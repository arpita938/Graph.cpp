public:
	void topoCheck(int node,stack<int>&s,vector<int>&vis,vector<int> adj[]){
	    vis[node]=1;
	    for(auto i:adj[node]){
	        if(!vis[i]){
	        topoCheck(i,s,vis,adj);
	    }
	   }
	   s.push(node);//once when the dfs call is over we need to push the node in the stack 
	}
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    stack<int>s;
	    vector<int>vis(V,0);
	    for(int i=0;i<V;i++){
	        if(vis[i]==0){
	            topoCheck(i,s,vis,adj);
	        }
	    }
	    vector<int>v;
	    for(int i=0;i<V;i++){
	        while(!s.empty()){
	            v.push_back(s.top());
	            s.pop();
	        }
	    }
	    return v;
	}
