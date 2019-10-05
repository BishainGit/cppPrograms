#include <bits/stdc++.h>
using namespace std;
struct Node{
   string data;
   int priority;
};

bool compare(Node n1,Node n2){
   
   return n1.priority < n2.priority;
}

int main(){
    vector<Node> v = {{"bishain",1},{"purinma",3},{"komal",2},{"papa",5},{"amma",4},{"bhia",6}};
    sort(v.begin(),v.end(),compare);

    for(auto a:v){
       cout << a.data << " "<< a.priority <<endl;
    }

return 0;
}
