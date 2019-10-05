#include <bits/stdc++.h>
using namespace std;




int main() {
  //cout<<"GfG!";
  
  vector<int> v = {1,3,5,2,3,4,3,5,6,4,2,5,7,8,2,3,4,5};
  
  cout << *max_element(v.begin(),v.end()) <<endl;
  cout << accumulate(v.begin(),v.end(),0)<<endl;
  
  //keeping index
  vector<int>::iterator it;
   it = find(v.begin(),v.end(),2);
   
  if(v.end() != it){
    cout << count(v.begin(),v.end(),2) <<endl;
  }
  sort(v.begin(),v.end());//sort
  
  sort(v.begin(),v.end(),greater<int>());
  reverse(v.begin(),v.end());
  
  if(binary_search(v.begin(),v.end(), 3) ){
    v.erase(v.begin()+1);
    v.erase(unique(v.begin(),v.end()) ,v.end());
  }
  v.resize(10);
  
  if(!v.empty()){
    swap(v[2],v[3]);
  }
  
  v.push_back(6);
  v.pop_back();
  
  
  for(int i=0;i<v.size();i++){
    cout << v.at(i)<<" ";
  }

  
   return 0;
}
