#include<bits/stdc++.h>
using namespace std;
//kruskal mst possible in cpp
const int MAX =  10;
int edges,nodes;
int arr[MAX];
int size[MAX];

vector <pair<long long,pair<int,int>>> p;
vector <pair<long long,pair<int,int>>> path;


void initialize(){
     for(int i=0;i<MAX;i++){
         arr[i] = i;
         size[i] = 1;
   }

}

int root(int i){
    while(arr[i] != i){
        arr[i] = arr[arr[i]];
        i = arr[i];

   }
  return i;
}

void unian(int a,int b){
     int root_a = root(a);
     int root_b = root(b);
     if(size[root_a] < size[root_b]){
           arr[root_a] = arr[root_b];
           size[root_b] += size[root_a];
     }else{

           arr[root_b] = arr[root_a];
           size[root_a] += size[root_b];
   }

}

long long kruskal(vector <pair<long long,pair<int,int>>> p){
          int x,y,j=0;
          long long w,minimumCost =0;
     
       for(int i=0;i<p.size();i++){
              x = p[i].second.first;
              y = p[i].second.second;
              w = p[i].first;
              cout << w <<endl;
       if(root(x) != root(y)){
          
           unian(x,y);
          minimumCost += w;
          path.push_back({w,{x,y}}); 
       } 
      }

 return minimumCost;
}


int main(){
    initialize();
     
   
 int x,y;
    long long weights,minimumCost;
    

    scanf("%d %d",&nodes,&edges);

    for(int i=1;i<=edges;i++){
       scanf("\n%d %d %lld",&x,&y,&weights);
       
      
       p.push_back({weights,{x,y}});
    }
    
    sort(p.begin(),p.end());
   
     minimumCost = kruskal(p);
   
    cout << minimumCost << endl;

     for(auto a:path){
      cout << a.second.first <<"--" << a.first <<"-->" << a.second.second <<endl;
    }

return 0;
}
