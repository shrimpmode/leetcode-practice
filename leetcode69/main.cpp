#include <iostream>

class Solution {
public:
  int mySqrt(int x) {
    int start = 0, end = x;
    if (x == 0 || x == 1)
      return x;
    while (start <= end) {
      int mid = start + (end - start) / 2;

      if (mid == x / mid)
        return mid;

      if (mid < x / mid) {
        start = mid + 1;
      } else {
        end = mid - 1;
      }
    }
    return end;
  }
};
int main() {
  Solution sol;

  int ans = sol.mySqrt(8);
  std::cout << ans << "\n";
  return 0;
}
