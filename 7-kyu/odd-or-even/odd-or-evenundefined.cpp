#include <string>
#include <vector>
​
std::string odd_or_even(const std::vector<int> &arr)
{
  int n = arr.size();
  int sum = 0;
  
  for(int i = 0; i < n; i++){
    sum += arr[i];
  }
  
  if(sum % 2 == 0) {
    return "even";
  }
  
  return "odd";
  
}
