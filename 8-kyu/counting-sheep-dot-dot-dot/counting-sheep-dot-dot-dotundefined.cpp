#include <vector>
​
using namespace std; 
​
int count_sheep(vector<bool> arr) 
{
  int n = arr.size();
  int res = 0;
  for(int i = 0; i < n; i++){
    if(arr[i]) {
      res++;
    }
  }
  return res;
}
​
​
