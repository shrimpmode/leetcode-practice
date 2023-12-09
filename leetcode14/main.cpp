#include <iostream>
#include <set>
#include <vector>

using namespace std;

string findPrefixv2(vector<string> strs) {
  string prefix = "";
  int j = 0;

  while (j < strs[0].size()) {
    char c = strs[0][j];
    for (int i = 0; i < strs.size(); i++) {
      if (c != strs[i][j] || j >= strs[i].size())
        return prefix;
    }
    prefix = prefix + strs[0][j];

    j++;
  }
  if (j == 0)
    return "";
  return prefix;
}

int main() {
  vector<string> strs = {"flower", "flow", "flight"};
  cout << findPrefixv2(strs) << endl;
  return 0;
}
