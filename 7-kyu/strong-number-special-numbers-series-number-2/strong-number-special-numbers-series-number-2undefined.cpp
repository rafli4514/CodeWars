#include <string>
using namespace std; 
​
string strong_num (int number )
{
  int sum = 0;
  int digit = number;
  
  while(digit > 0) {
    int curDigit = digit % 10;
    int faktorial = 1;
    for(int i = 1; i <= curDigit; i++) {
      faktorial *= i;
    }
​
    sum += faktorial;
    digit /= 10;
  }
  
  if(sum == number) {
    return "STRONG!!!!";
  }
  
  return "Not Strong !!";
  
  
}
