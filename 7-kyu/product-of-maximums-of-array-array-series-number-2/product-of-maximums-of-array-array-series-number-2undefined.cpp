#include <iostream>
#include <vector>
​
using namespace std; 
​
void swap(int &x, int &y){
  int temp = x;
  x = y;
  y = temp;
}
​
void bubbleSort(vector<int>& v){
  int n = v.size();
  
  for(int i = 0; i < n - 1; i++){
    for(int j = 0; j < n - i - 1; j++){
      if(v[j] < v[j + 1]){
        swap(v[j], v[j + 1]);
      }
    }
  }
​
}
​
int maxProduct (vector<int>numbers , int sub_size)
{
  int res = 1;
  vector<int>num = numbers;
  bubbleSort(num);
  
  for(int i = 0; i < sub_size; i++){
    res *= num[i];
  }
  
  return res;
}
