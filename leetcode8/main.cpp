#include <climits>
#include <string>

using namespace std;

class Solution {
public:
  int myAtoi(string s) {
    int number = 0;
    int index = 0;
    int sign = 1;
    while (s[index] == ' ')
      index++;
    if (s[index] == '-' || s[index] == '+') {
      sign = s[index] == '-' ? -1 : 1;
      index++;
    }
    while (index < s.size() && isdigit(s[index])) {
      int digit = s[index] - '0';
      if (number > INT_MAX / 10) {
        return sign > 0 ? INT_MAX : INT_MIN;
      }

      if (number == INT_MAX / 10 && digit > INT_MAX % 10) {
        return sign > 0 ? INT_MAX : INT_MIN;
      }
      number = number * 10 + digit;
      index++;
    }
    return sign * number;
  }
};

int main() {
  Solution solution;
  string s = "42";
  int result = solution.myAtoi(s);
  return 0;
}
