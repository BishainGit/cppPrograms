#include <bits/stdc++.h>
using namespace std; //separate chaining for no collisions
                     //open addressing- linear probing,quadratic probing,double hashing

int linearProbing(int ele,int tsize,int i){
    return ((ele % tsize) +i) % tsize;
}

int quadraticProbing(int ele,int tsize,int i){
  return ((ele%tsize)+ i*i) % tsize;
}

int doubleHashing(int ele,int tsize,int i,int prime){
    return  (ele%tsize + i*(prime-(ele % prime))) % tsize ;
}

int prime(int tsize){
     int i=1;
     int f2;
    for( i=tsize-1;i>1;i--){
             f2 = 1;
        for(int j=2;j<=sqrt(i);j++){
            if(i%j == 0){
              f2 = 0;
              break;
            }
        }
       if(f2 == 1){
         
        break;
       }
   
    }
  return i;
}

int main(){
     ///separate chaining
     array<vector<int>,11> a; //array<int,11> a;
     int arr[] = {23,56,45,34,7,85,634,56,34,56,45};
         int n = sizeof(arr)/sizeof(arr[0]);
      int key;

     for(int i=0;i<n;i++){
            key = arr[i]%a.size();
           a[key].push_back(arr[i]);
    }
    
    for(int i=0;i<11;i++){
              cout << i <<"->";
            for(auto k:a[i]){
                 cout << k << " ";
          }
          cout<<""<<endl;
    }  
    cout << endl;
    ////open addressing based in array
    int tsize = 11;
    int htabel[11];
 int ele[] = {23,56,45,34,7,85,634,56,34,56,45};
    

   for(int j=0;j<11;j++){
      htabel[j] =-1;
    }
    //linear probing 
    for(int i=0;i<11;i++){
      if(htabel[ele[i]%tsize] >0){
            int k=1;
           while( htabel[quadraticProbing(ele[i],11,k)] > 0){
               k++;
           }
           htabel[quadraticProbing(ele[i],11,k)] = ele[i];
      }else{
        htabel[ele[i]%tsize] = ele[i];
      }
    }
    
    for(int j=0;j<11;j++){
      cout << j <<"->"<<htabel[j]<<endl;
    }
    cout<<""<<endl; 



    ///quadratic probing
    for(int j=0;j<11;j++){
      htabel[j] =-1;
    }

      for(int i=0;i<11;i++){
      if(htabel[ele[i]%tsize] >0){
            int k=1;
           while( htabel[quadraticProbing(ele[i],11,k)] > 0){
               k++;
           }
           htabel[quadraticProbing(ele[i],11,k)] = ele[i];
      }else{
        htabel[ele[i]%tsize] = ele[i];
      }
    }
    
    for(int j=0;j<11;j++){
      cout << j <<"->"<<htabel[j]<<endl;
    }
    cout<<""<<endl; 

   //double hashing
     int p = prime(tsize);
     
      for(int j=0;j<11;j++){
      htabel[j] =-1;
    }

      for(int i=0;i<11;i++){
      if(htabel[ele[i]%tsize] >0){
            int k=1;
           while( htabel[doubleHashing(ele[i],11,k,p)] > 0){
               k++;
           }
           htabel[doubleHashing(ele[i],11,k,p)] = ele[i];
      }else{
        htabel[ele[i]%tsize] = ele[i];
      }
    }
    
    for(int j=0;j<11;j++){
      cout << j <<"->"<<htabel[j]<<endl;
    }
    cout<<""<<endl;
return 0;
}
