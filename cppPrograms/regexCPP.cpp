#include <bits/stdc++.h>
using namespace std;

int main ()
{

  if (std::regex_match ("subject", std::regex("(.*)(ub)(.*)") ))
    std::cout << "string literal matched\n";
    
  string s =   "subject";
  
  string e = "(.*)(ub)(.*)";
  
  string l = "(", r = ")", dotstar = "(.*)";
  
  string a = dotstar + l + s.substr(2,4) + r + dotstar ;
  
  if (std::regex_match ("subject", std::regex(a) ))
    std::cout << "string literal matched\n";
    
  cout << a << endl;
  
return 0;
}
