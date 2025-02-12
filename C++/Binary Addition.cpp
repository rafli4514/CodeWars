#include <cstdint>
#include <string>

std::string add_binary(uint64_t a, uint64_t b) {
     std::string biner = "";
  long int desimal = a + b;
  
  if(desimal == 0){
    return "0";
  }
  
  do{
    if(desimal % 2 == 1){
      biner = '1' + biner;
    }else{
      biner = '0' + biner;
    }
    desimal /= 2;
  }while (desimal > 0);
  
  return biner;
}
