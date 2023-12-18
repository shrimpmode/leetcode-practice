#include <iostream>
#include <vector>

class Solution {
public:
  int removeDuplicates(std::vector<int> &nums) {
    int l = 0;
    for (int i = 1; i < nums.size(); i++) {
      if (nums[i] != nums[l]) {
        nums[l + 1] = nums[i];
        l++;
      }
    }
    return l + 1;
  }
};

int main() {

  std::vector<int> nums = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5};
  Solution s;
  int l = s.removeDuplicates(nums);
  for (auto i : nums)
    std::cout << i << " ";
  return 0;
}
