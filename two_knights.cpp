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
/*
n^2 * (n^2-1)
- 4 * 2  // 4 squares where it attacks 2 spaces
- 8 * 3  // 8 squares where it attacks 3 spaces

*/
void solve() {
    int input;
    cin >> input;
    for(int i = 1; i <= input; i++) {
        ll a1 = i*i;
        ll a2 = a1*(a1-1)/2;
        if(i > 2)
            a2-=4*(i-1)*(i-2);
        cout << a2 << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    solve();
}

// TIME: 8 min