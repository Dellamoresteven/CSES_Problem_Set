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
    int n;
    cin >> n;

    // 1 3 5 2 4
    // print out the odds then print out the evens
    // The only time this wont work is for 1 and 4, but every other number it should be fine

    if(n == 4){
        cout << "2 4 1 3";
        return;
    } else if(n == 1){
        cout << "1";
        return;
    }

    if(n < 5) {
        cout << "NO SOLUTION";
        return;
    }

    // ODD
    for(int i = 1; i <= n; i+=2){
        cout << i << " ";
    }
    // EVEN
    for(int i = 2; i <= n; i+=2){
        cout << i << " ";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    solve();
}

// TIME: 10 min