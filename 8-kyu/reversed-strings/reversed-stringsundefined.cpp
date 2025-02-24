#include <string>
using namespace std ; 
​
string reverseString (string str )
{
  int n = str.length();
  
  for(int i = 0; i < n / 2; i++) {
      char swap = str[i];
      str[i] = str[n - i - 1];
      str[n - i - 1] = swap; 
  }
  return str;
}
