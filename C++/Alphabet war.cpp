#include <string>
#include <map>
using namespace std;

string alphabetWar(string fight)
{
    int right = 0;
    int left = 0;

    std::map<char, int> leftArr = {
        {'w', 4}, {'p', 3}, {'b', 2}, {'s', 1}
    };

    std::map<char, int> rightArr = {
        {'m', 4}, {'q', 3}, {'d', 2}, {'z', 1}
    };

    for (std::string::size_type i = 0; i < fight.length(); i++) {
        if (leftArr.count(fight[i])) {
            left += leftArr[fight[i]];
        }
        if (rightArr.count(fight[i])) {
            right += rightArr[fight[i]];
        }
    }

    if (left == right) {
        return "Let's fight again!";
    } else if (left > right) {
        return "Left side wins!";
    } else {
        return "Right side wins!";
    }
}
