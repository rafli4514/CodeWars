#include <vector>
​
std::vector<int> solve(std::vector<int> vec){    
  int n = vec.size();
  std::vector<int> res;
  
  for(int i = 0; i < n; i++){
    bool found = false;
    
    for(int j = i + 1; j < n; j++){
      if(vec[i] == vec[j]){
        found = true;
        break;
      }
    }
    
    if(!found) {
      res.push_back(vec[i]);
    }
  }
  return res;
}
