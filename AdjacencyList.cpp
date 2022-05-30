#include <iostream>
#include<list>
#include<unordered_map>
#include<bits/stdc++.h>

using namespace std;

class graph{
    public:
    unordered_map<int,list<int>>m;
    void addEdges(int u,int v,int direction){
        m[u].push_back(v);
        
        if(direction==0)
        m[v].push_back(u);
    }
    void print(){
        for(auto i: m){
            cout<<i.first<<"->";
            for(auto j : i.second){
                cout<<j<<", ";
            }
            cout<<endl;
        }
    }
};

int main()
{
    int n;
    cout<<"Enter the number of nodes"<<endl;
    cin>>n;
    int m;
    cout<<"Enter the number of edges"<<endl;
    cin>>m;
    graph g;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        g.addEdges(u,v,0);//making an undirected graph
    }
    
    //printing the graph
    g.print();
    return 0;
}
