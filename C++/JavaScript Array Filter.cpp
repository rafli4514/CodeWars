#include <vector>

std::vector<int> get_even_numbers(const std::vector<int>& arr) {
  std::vector<int> res;
  int n = arr.size();
  
  for(int i = 0; i < n; i++){
    if(arr[i] % 2 == 0){
      res.push_back(arr[i]);
    }
  }
  
  return res;

}
