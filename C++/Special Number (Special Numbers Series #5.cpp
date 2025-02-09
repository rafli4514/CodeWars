#include <string>

using namespace std; 

string specialNumber (int number)
{
  if(number < 0){
    return "NOT!!";
  }
    
  while(number != 0){
    int digit = number % 10;
      if(digit > 5){
        return "NOT!!";
      }
    number /= 10;
  }
  
  return "Special!!" ;
}
