#include <string>
​
int persistence(long long n){
   int count = 0;
​
    while (n >= 10) {
        long long res = 1;
        std::string numStr = std::to_string(n);
​
        for (char digit : numStr) {
            res *= (digit - '0');
        }
​
        n = res;
        count++;
    }
​
    return count;
}
