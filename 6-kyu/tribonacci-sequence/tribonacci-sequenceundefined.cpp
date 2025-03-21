std::vector<int> tribonacci(std::vector<int> signature, int n)
{
    std::vector<int> result;
    int sum;
  
    if(n == 0) {
      return result;
    } 
  
  if(n < 3) {
      for(int i = 0; i < n; i++) {
        result.push_back(signature[i]);
      }
      return result;
    }
  
    result = signature;
​
    for(int i = 0; i < n; i++) {
      
      if(i == n - 3) {
        break;
      }
      sum = result[i] + result[i + 1] + result [i + 2];
      
      result.push_back(sum);
    }
  
    return result;
}
