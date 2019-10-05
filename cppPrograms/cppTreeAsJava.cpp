#include <bits/stdc++.h>
using namespace std;

class Node{
     public:
       int data;
       Node* left;
       Node* right;
      Node(int d){
         data = d;
         left = NULL;
         right = NULL;
      }

};


int main(){
    Node* root = new Node(5);
    cout << root->data <<endl;
    Node* t = root->left;
return 0;
}
