#include <bits/stdc++.h>
using namespace std;

int main() {
	//cout<<"GfG!";
	map<string,int> m {{"a",1},{"c",8},{"b",3}};
	 m.insert(pair<string,int>("d",6));
	 m["k"] = 4;
	 map<string,int>::iterator i;
	 
     m.erase("d");
     m.erase(m.begin());
	for(i = m.begin();i != m.end();++i){
	    cout << i->first <<" "<<i->second <<endl;
	}
	

	return 0;
}
