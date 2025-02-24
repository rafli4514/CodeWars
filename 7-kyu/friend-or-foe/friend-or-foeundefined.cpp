#include <string>
#include <vector>
​
std::vector<std::string> friendOrFoe(const std::vector<std::string>& input) {
  int n = input.size();
  std::vector<std::string> res;
  
  for(int i = 0; i < n; i++){
    if(input[i].length() == 4){
      res.push_back(input[i]);
    }
  }
  
  return res;
}
​
