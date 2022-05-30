#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int>ans;
        queue<int>q;
        vector<int>visited(V,0);
        q.push(0);
        visited[0]=true;
        while(!q.empty()){
            int temp=q.front();
            q.pop();
            ans.push_back(temp);
            for(auto i:adj[temp]){
                if(!visited[i]){
                    visited[i]=true;
                    q.push(i);
                }
            }
        }
        return ans;
    }
};
