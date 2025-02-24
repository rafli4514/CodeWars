#include <string>
​
int string_to_number(const std::string& s) {
  std::string res = s;
  
  return stoi(res);
​
}
