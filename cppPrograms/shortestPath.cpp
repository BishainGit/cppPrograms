#include <bits/stdc++.h>
using namespace std;

int min(int a, int b){
    if(a<b){
     return a;
    }else{

    return b;
    }
}

int main(){
    //floyed warshal O(n^3)
           //gor les than 100 nodes
    int infi = 100000000;
    int n = 4 ;
     
    int graph[][n] = {{0, 8, infi, 1},
                     {infi,0, 1,infi},
                     {4, infi, 0 ,infi},
                     {infi, 2, 9, 0}
                     };
      for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
          for(int j=0;j<n;j++){
             graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
     }
     }
     }
   
   for(int i=0;i<n;i++){
          for(int j=0;j<n;j++){
            cout<<graph[i][j]<<" ";
     }
        cout<<endl;
    }

return 0;
}
