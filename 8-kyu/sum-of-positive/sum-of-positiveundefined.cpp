#include <vector>
​
int positive_sum (std::vector<int> arr){
  int n = arr.size();
  int sum = 0;
  
  for(int i = 0; i < n; i++){
    if(arr[i] <= 0){
      continue;
    } 
    sum += arr[i];
  }
  
  return sum;
}
