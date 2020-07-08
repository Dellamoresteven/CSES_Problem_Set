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
#define rl(x) getline(cin, x); stringstream ss(x);

typedef vector<int> vi;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<vector<ll>> matrix;
typedef pair<ll, ll> pll;

// remember you may need to reset state
void rsolve() {
}

/*
5
1*2*3*4*5
2*2*2*3*5
2^3 * 3^1 * 5^1

11

Prime Factors
*/

void solve() {
    ll n;
    cin >> n;
    ll j = 0;
    // 5 25 125 ...
    for(int i = 5; n / i >= 1; i *= 5) {
        j += n / i;
    }
    cout << j;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    solve();
}