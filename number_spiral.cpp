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
/*
1
1 3
= 9

1
2 3
= 8
*/
void rsolve(ll x, ll y) {
    if(x == 0 && y == 0){cout << "1"; return;}
    ll z = max(x,y);
    ll z2 = (z-1)*(z-1), ans;
    if(z%2) {
        if(y==z) {
            ans = z2+x;
        } else {
            ans = z2+2*z-y;
        }
    } else {
        if(x==z){
            ans=z2+y;
        }else {
            ans = z2+2*z-x;
        }
    }
    cout << ans << "\n";
}

void solve() {
    int t;
    cin >> t;
    while(t--) {
        // every test
        ll y, x;
        cin >> y >> x;
        rsolve(x,y);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    solve();
}

// TIME: 22 min
