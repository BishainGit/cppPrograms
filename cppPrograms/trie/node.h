class Node{
    public:
    char ch;
    Node *arr[26];

     Node(char c){
       ch = c;
       for(int i=0;i<26;i++){
           arr[i] = NULL;
       }
    }
};
