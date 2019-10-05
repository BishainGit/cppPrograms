#include <bits/stdc++.h>
using namespace std; //priority queue,hash table,directed graph,weighted graph,bfs,dfs

const int N=5010;  //cycle detection, shortest path ,mst(salesperson)

vector<int> g[N];
bool vis[N];

void add_edge(int u,int v){
     g[u].push_back(v);
}

public class Tra{
       
void traverse(int start){
     vis[start] = true;
     cout<<start<<endl;
     
     for(auto to:g[start])
         if(!vis[to])
             traverse(to);
 

}

};

int main(){
   /* add_edge(0,1);
    add_edge(0,2);
    add_edge(1,3);
    add_edge(1,4);
    add_edge(4,5);
    add_edge(2,6); */
    
    add_edge(1,4);
    add_edge(1,3);
    add_edge(2,4);
    
    add_edge(3,4);
    add_edge(4,5);
    add_edge(5,1); 

    Tra *t = new Tra; 

    t.traverse(2);
   
      
return 0;
}
