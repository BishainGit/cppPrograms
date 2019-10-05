#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
     int n =a,m =b;
     
   //gcd
   while(a != b){
        if(a > b){
            a =a -b;
        }else{
            b = b -a;
        }
    }
    
    int gcd = a;
    
    //hcf
    a =n ,b =m;
    if(a < b){
        swap(a,b);
    }
     int t;
    while( b != 0){
        t = b;
        b = a % b;
        a = t;
    }
    
     int hcf = a;
      int lcm = hcf * gcd;
      cout << lcm <<endl;
	return 0;
	
}
