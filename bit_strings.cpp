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

void solve() {
    int n;
    cin >> n;

    /* This does not work because you overflow the ll before you do the mod.
       We have to mod before we overflow */
    // ll ans = pow(2,n);
    // cout << (ans%((int)1e9+7));

    ll ans = 1;
    rep(i, 0, n){
        ans = 2*ans%((int)1e9+7);
    }
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    solve();
}