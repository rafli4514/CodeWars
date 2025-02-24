#include <vector>
​
bool betterThanAverage(std::vector<int> classPoints, int yourPoints) {
    int n = classPoints.size();
  int sum = 0;
  
  for(int i = 0; i < n; i++) {
    sum += classPoints[i];    
  }
  
  int avg = sum / n;
  
  return yourPoints > avg ? true : false;
  
}
