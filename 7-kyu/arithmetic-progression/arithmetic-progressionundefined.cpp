#include <string>
​
std::string arithmeticSequenceElements(int a, int d, int n)
{
  std::string res = "";
  int sum = a; 
  
  for(int i = 0; i < n; i++){
    if(i == n - 1){
      res += std::to_string(sum);
    }else{
      res += std::to_string(sum) + ", ";      
    }
    sum += d;
  }
  return res;
}
