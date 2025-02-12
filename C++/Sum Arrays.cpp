#include <vector>

int sum(std::vector<int> nums) {
  int n = nums.size();
  
  if(n == 0){
    return 0;
  }
  
  int sum = 0;
  
  for(int i = 0; i < n; i++){
    sum += nums[i];
  }
  
  return sum;
}
