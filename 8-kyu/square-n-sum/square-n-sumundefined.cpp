#include <vector>
​
int square_sum(const std::vector<int>& numbers)
{
  int n = numbers.size();
  int sum = 0;
  
  for(int i = 0; i < n; i++){
    sum += numbers[i] * numbers[i];
  }
  
  return sum;
​
}
