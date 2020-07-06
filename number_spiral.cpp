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

/*
1
  3
    7
*/

bool isPrime(int n) {
    if (n < 2) return false;
    bool answer = true;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            answer = false;
        }
    }
    return answer;
}

// https://cses.fi/problemset/task/1071/
// remember you may need to reset state
void rsolve(int x, int y) {
    int primeCount = 0;
    int prime;
    int n = 2;
    for(;;) {
        if(isPrime(n)) {
            primeCount++;
            if(primeCount == max(x,y)*2){
                prime = n;
                break;
            }
        }
        n++;
    }
    cout << prime;
    // if(x == y){ // Prime number on diagonal

    // } else if(x % 2 == 0 && x < y) { // prime number - (x - y)

    // } else if(x % 2 != 0 && ) {

    // }
}

void solve() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        // every test
        int y, x;
        cin >> y >> x;
        rsolve(x,y);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    solve();
}

// TIME: 10 min