#include <vector>

using namespace std; 

void swap(int& x, int& y){
  int temp = x;
  x = y;
  y = temp;
}

void bubbleSort(vector<int>& v) {
    int n = v.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (v[j] > v[j+1]) {
                swap(v[j], v[j+1]);
            }
        }
    }
}
unsigned long long minValue (vector <int> values)
{
  vector<int> sortValues = values;
  bubbleSort(sortValues);
  vector<int> res;

  if(!sortValues.empty()){
    res.push_back(sortValues[0]);
    for(int i = 1; i < sortValues.size(); i++){
        if(sortValues[i] != res.back()){
          res.push_back(sortValues[i]);
        }
    }
  }
  
  unsigned long long result = 0;
  for(int num : res){
    result = result * 10 + num;
  }
    
  return result; 
}
