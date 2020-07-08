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
#include <sstream>

using namespace std;

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define trav(a, x) for(auto& a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define rl(x) getline(cin, x); stringstream ss(x);

typedef vector<int> vi;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<vector<ll> > matrix;
typedef pair<ll, ll> pll;

// remember you may need to reset state
/*
1 2 3 4 5 6
1 2 3 4
n+0 n+1 n+2 n+3
*/
void rsolve() {
}

void solve() {
    int n;
    cin >> n;

    if(n%4!=0 && n%2==0){
        cout << "NO";
        return;
    } else if(n%4==1) {
        cout << "NO";
        return;
    }

    vi one, two;
    int startAt = n%4 ? 3 : 4;
    for(int i = 1; i < n-4; i+=4) {
        one.push_back(i+0+startAt);
        one.push_back(i+3+startAt);
        two.push_back(i+1+startAt);
        two.push_back(i+2+startAt);
    }

    if(n%4){
        one.push_back(1);
        one.push_back(2);
        two.push_back(3);
    } else {
        one.push_back(1);
        one.push_back(4);
        two.push_back(2);
        two.push_back(3);
    }

    cout << "YES" << "\n";

    cout << one.size() << "\n";
    rep(i,0,one.size())
        std::cout << one.at(i) << ' ';

    cout << "\n" << two.size() << "\n";
    rep(i,0,two.size())
        std::cout << two.at(i) << ' ';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    solve();
}