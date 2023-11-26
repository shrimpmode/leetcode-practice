#include <iostream>
#include <unordered_map>

using namespace std;

int main(int argc, char *argv[]) {
  unordered_map<string, int> m = {
        {"I", 1},   {"IV", 4},   {"V", 5},   {"IX", 9},   {"X", 10},
        {"XL", 40}, {"L", 50},   {"XC", 90}, {"C", 100},  {"CD", 400},
        {"D", 500}, {"CM", 900}, {"M", 1000}
    };

  string s = "MCMXCIV";
  int i = 0, number = 0;

  while (i < s.size()) {
    if (i + 1 < s.size() && m[s.substr(i, 1)] < m[s.substr(i, 2)]) {
      number += m[s.substr(i, 2)];
      i += 2;
    } else {
      number += m[s.substr(i, 1)];
      i++;
    }
  }
  cout << number << endl;
  return 0;
}
