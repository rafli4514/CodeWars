#include <string>

std::string sortMyString(const std::string &s)
{
  std::string even = "";
  std::string odd = "";
  int n = s.length();
  
  
  for(int i = 0; i < n; i++){
    if(i % 2 == 0){
      even = even + s[i];
    }else{
      odd = odd + s[i];
    }
  }
  
  
  return even + " " + odd;
}
