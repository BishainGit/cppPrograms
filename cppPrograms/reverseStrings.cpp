#include <bits/stdc++.h>
using namespace std;

int main() {
       vector<string> v = {"bishain","komal","purinma","hushain","santoshi","mitthulal"};

  sort(v.begin(),v.end(),greater<string>());

for(auto a:v){
    cout <<a << endl;
} 

    return 0;
}
