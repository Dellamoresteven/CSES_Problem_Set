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
n+0 n+1 n+2 n+3 n+4 n+5 n+6 n+7 n+8 ... n+n

n+0 n+1 n+2 n+3 n+4 n+5 n+6 n+7
*/
void rsolve() {
}

void solve() {
    int n;
    cin >> n;
    vi one;
    vi two;
    bool safeOdd = false;
    for(int i = 1; i <= n/2; i+=2){
        one.push_back(i);
        one.push_back(n-i+1);
        if(i+1 == n-i){
            safeOdd = true;
        } else {
            two.push_back(i+1);
            two.push_back(n-i);
        }
    }
    if(n%2==1 && !safeOdd) { // odd

    }




    cout << "YES" << "\n";
    cout << one.size() << "\n";
    for(int i=0; i < one.size(); i++)
        std::cout << one.at(i) << ' ';

    cout << "\n" << two.size() << "\n";
    for(int i=0; i < two.size(); i++)
        std::cout << two.at(i) << ' ';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    solve();
}