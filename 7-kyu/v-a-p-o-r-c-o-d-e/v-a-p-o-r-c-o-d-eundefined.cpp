#include<string>
​
std::string vaporcode(const std::string &str) {
  std::string res;
  
  for(char c: str){
    if(c != ' '){
      if(!res.empty()){
        res += "  ";
      }
      res += toupper(c);
    }
  }
  
  return res;
}
