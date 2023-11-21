#include <cassert>
#include <climits>

class Solution {
public:
  bool isPalindrome(int x) {
    int copy = x;
    int reversedNumber = 0;
    while (copy > 0) {
      int digit = copy % 10;
      if (reversedNumber > INT_MAX / 10)
        return false;
      reversedNumber = reversedNumber * 10 + digit;
      copy = copy / 10;
    }

    return (x == reversedNumber);
  }
};

int main() {
  Solution solution;
  assert(solution.isPalindrome(121) == true);
  assert(solution.isPalindrome(-121) == false);
  assert(solution.isPalindrome(10) == false);
  assert(solution.isPalindrome(-101) == false);
  return 0;
}
