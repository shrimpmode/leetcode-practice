#include <iostream>
#include <vector>

int main() {
  std::vector<int> weights = {4, 3, 1};
  std::vector<int> values = {30, 20, 15};
  int capacity = 4;

  std::vector<std::vector<int>> dp(weights.size() + 1,
                                   std::vector<int>(capacity + 1, 0));

  for (int i = 1; i <= weights.size(); ++i) {
    for (int j = 1; j <= capacity; ++j) {
      if (weights[i - 1] <= j) {
        dp[i][j] = std::max(dp[i - 1][j],
                            dp[i - 1][j - weights[i - 1]] + values[i - 1]);
      } else {
        dp[i][j] = dp[i - 1][j];
      }
    }
  }

  std::cout << dp[weights.size()][capacity] << std::endl;
}
