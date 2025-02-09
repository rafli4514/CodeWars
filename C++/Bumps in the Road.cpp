#include <string>

std::string bumps(std::string road){
  int bumps = 0;
  
  for(char i: road){
    if(i == 'n'){
      bumps += 1;
    }
  }
  
  if(bumps > 15){
    return "Car Dead";
  }
  
  return "Woohoo!";
}
