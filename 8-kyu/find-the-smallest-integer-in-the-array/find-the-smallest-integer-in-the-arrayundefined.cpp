#include <vector>
​
using namespace std; 
​
int findSmallest(vector <int> list)
{
  int n = list.size();
  
  int min = list[0];
  
  for(int i = 0; i < n; i++) {
    if(min > list[i]) {
      min = list[i];
    }
  }
  
  return min;
}
