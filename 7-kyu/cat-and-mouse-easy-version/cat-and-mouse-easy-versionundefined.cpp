#include <string>
​
std::string cat_mouse(std::string x) {
  int dot = 0;
  int n = x.length();
  
  for(int i = 0; i < n; i++){
    if(x[i] == '.'){
      dot += 1;
    }
  }
  
  return dot <= 3 ? "Caught!" : "Escaped!";
}
