#include <string>
​
std::string switcheroo(const std::string &s) {
  std::string res = s; 
  
  int n = res.size();
  
  for(int i = 0; i < n; i++){
    if(s[i] == 'a'){
      res[i] = 'b';
    }
    if(s[i] == 'b'){
      res[i] = 'a';
    }
  }
  
  return res;
}
