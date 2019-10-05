#include <bits/stdc++.h>
using namespace std;

int main() {

   //binary to decimal
   
    
 stringstream ss;
    //octal to decimal
    long i = 354545;
    ss<<i;
    ss>>oct>>i;
    cout << i <<endl;

    //hexa to decimal
    long k;
    string s ="F234ED";
    ss<<s;
    ss>>hex>>k;
    cout << k <<endl;
       
       long b = i^k;
       cout << b <<endl;
   
            b = i&k;
       cout << b <<endl;

            b = i|k;
       cout << b <<endl;

            b = ~i&k | i&~k;
       cout << b <<endl;
           

      return 0;
   
   
}
