#include <vector>

int meeting(const std::vector<char>& rooms) {
  int n = rooms.size();
  
  for(int i = 0; i < n; i++){
    if(rooms[i] == 'O'){
      return i;
    }
  }
  
  return -1;
}
