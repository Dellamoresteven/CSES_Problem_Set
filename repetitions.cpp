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
    string t;
    cin >> t;
    int max = 0;
    int longestSub = 0;
    char currSub = t.at(0);
    for(auto c : t){
        if(currSub == c){
            longestSub++;
        } else {
            if(max < longestSub){ max = longestSub; }
            longestSub = 1;
            currSub = c;
        }
    }
    longestSub > max ? cout << longestSub : cout << max;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    solve();
}

// TIME: 4 min