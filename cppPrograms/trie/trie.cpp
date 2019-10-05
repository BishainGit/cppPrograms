#include <bits/stdc++.h>
#include "node.h"
using namespace std;

void insert(Node *root,string s){
     for(int i=0;i<s.size();i++){
         for(int j=0;j<26;j++){
               if(root->arr[j] == NULL){
                  Node *new_node = new Node(s[i]);
                  root->arr[j] = new_node;
                  root = root->arr[j];
                  break;
               }
               if(root->arr[j]->ch == s[i]){
                   root = root->arr[j];
                   break;

               }

        }
     }

}

bool check(Node *root,string s){
    for(int i=0;i<s.size();i++){
       for(int j=0;j<26;j++){
           if(root->arr[j] == NULL){
              return false;

           }
           if(root->arr[j]->ch == s[i]){
             root = root->arr[j];
             break;
           }
      }
     

    }
   return true;

}

int main(){
    Node *root = new Node('@');
    string arr[] = {"abcd","abcef","abef"};
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
       insert(root,arr[i]);
    }

    if(check(root,"abef")){
     cout << "word is present" << endl;

    }
return 0;
}
