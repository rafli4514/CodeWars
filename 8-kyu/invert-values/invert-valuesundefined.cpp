#include <vector>
​
std::vector<int> invert(std::vector<int> values)
{
  
    int n = values.size();
  
  for(int i = 0; i < n; i++){
    values[i] *= -1;
  }
  
  return values;
}
