#include <algorithm>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <vector>

using namespace std;

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define trav(a, x) for(auto& a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef vector<int> vi;

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<vector<ll>> matrix;
typedef pair<ll, ll> pll;

// remember you may need to reset state
void rsolve() {
}

void solve() {

  int t;
  cin >> t;
  vi input;
  for(int i = 0; i < t-1; i++) {
    int in;
    cin >> in;
    input.push_back(in);
  }
  std::sort(input.begin(), input.end());

  for(int i = 0; i < t-1; i++){
      if(i+1 != input.at(i)){
          cout << i+1;
          return;
      }
  }
  cout << input.at(input.size()-1)+1;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  solve();
}

// TIME: 6 min