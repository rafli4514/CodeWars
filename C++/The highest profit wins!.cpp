#include <utility>
#include <vector>

std::pair<int, int> min_max(const std::vector<int>& arr)
{
  int n = arr.size();
  int max = arr[0];
  int min = arr[0];
  
  for(int i = 0; i < n; i++){
    if(min > arr[i]){
      min = arr[i];
    }
    
    if(max < arr[i]){
      max = arr[i];
    }
  }
  
  
    return {min , max};
}
