#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll n;
string s;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n >> s;
  auto ans = 0LL;
  auto b = 0LL;
  auto i = 0LL;
  for (const auto& c : s) {
    ++i;
    if ('O' == c) {
      ans += i;
      ans += b;
      b += 1;
    } else {
      b = 0;
    }
  }

  cout << ans;

  return 0;
}