#include <string>
​
std::string how_much_i_love_you(int nb_petals) {  
  std::vector<std::string> phrases = {
        "I love you",         // 1
        "a little",           // 2
        "a lot",              // 3
        "passionately",       // 4
        "madly",              // 5
        "not at all"          // 6
    };
    
    return phrases[(nb_petals - 1) % 6];
}
​
