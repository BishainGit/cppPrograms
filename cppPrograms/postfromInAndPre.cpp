#include <bits/stdc++.h>
using namespace std; 
  
// A utility function to search x in arr[] of size n 
 
  
// Prints postorder traversal from given inorder and preorder traversals 
void printPostOrder(vector<int> vin, int pre[], int n) 
{ 
    // The first element in pre[] is always root, search it 
    // in in[] to find left and right subtrees 
    int root = find(vin, pre[0]) - vin.begin() ; 
        
    cout << root<<" ";
    // If left subtree is not empty, print left subtree 
    if (root != 0) 
        printPostOrder(vin, pre + 1, root); 
  
    // If right subtree is not empty, print right subtree 
    if (root != n - 1) 
        printPostOrder(vin + root + 1, pre + root + 1, n - root - 1); 
  
    // Print root 
    cout << pre[0] << " "; 
} 
  
// Driver program to test above functions 
int main() 
{ 
    int in[] = { 4, 2, 5, 1, 3, 6 }; 
    int pre[] = { 1, 2, 4, 5, 3, 6 }; 
    int n = sizeof(in) / sizeof(in[0]); 
    cout << "Postorder traversal " << endl; 
    vector<int> vin(in,in+n);
    printPostOrder(vin, pre, n); 
    return 0; 
} 
