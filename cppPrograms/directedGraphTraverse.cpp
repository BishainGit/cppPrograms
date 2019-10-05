#include <bits/stdc++.h>
using namespace std; //priority queue,hash table,directed graph,weighted graph,bfs,dfs

const int N=5010;  //cycle detection, shortest path ,mst(salesperson)

vector<int> g[N];
bool vis[N];

void add_edge(int u,int v){
     g[u].push_back(v);
}

void traverse(int start){
     vis[start] = true;
     cout<<start<<endl;
     for(auto to:g[start])
         if(!vis[to])
            traverse(to);
 
}


int main(){
   /* add_edge(0,1);
    add_edge(0,2);
    add_edge(1,3);
    add_edge(1,4);
    add_edge(4,5);
    add_edge(2,6); */
    
    add_edge(7,3);
    add_edge(7,8);
    add_edge(7,9);
    add_edge(3,2);
    add_edge(3,4);
    add_edge(3,6);
    add_edge(8,5); 

    traverse(7);
     cout<<endl<<endl;
    //BFS i.e. levelorder for bt
    vector<int> queue;
    int start = 7;
    queue.push_back(7);
    while(! queue.empty()){
         for(auto a:g[start]){

             queue.push_back(a);
         }
      int ele = queue[0];
      cout<<ele<<endl;

      queue.erase(queue.begin());
      if(! queue.empty()){
          start = queue[0];
      }

   }      
return 0;
}
