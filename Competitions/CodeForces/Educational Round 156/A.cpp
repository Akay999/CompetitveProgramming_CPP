#include <bits/stdc++.h>

using namespace std;

void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "(debug " << #__VA_ARGS__ << "):",  dbg_out(__VA_ARGS__)

using ll = long long;

template<typename S, typename T> void smax(S &a, const T &b) { if ( a < b) a = b; }  // smax(s, 10) is equal to s = max(s, 10)
template<typename S, typename T> void smin(S &a, const T &b) { if ( a > b) a = b; } 

#define rng_init mt19937 rng(chrono::steady_clock::now().time_since_epoch().count())  // using mt19937 is better than using rand function for generating random numbers.
#define rng_seed(x) mt19937 rng(x)
#define all(x) x.begin() x.end()
#define sz(x) (int) (x).size()
// #define int long long    

const int MXN = 1e5 + 5, INF = 1e9 + 5;

void solve() {
    int n ;
    cin >> n;
    if(n < 7) {
        cout << "NO" << endl;
        return;
    }

    int a = 1, b = 2, c = 4;
    int rem = n - 7;
    if( rem % 3 == 0 || rem % 3 == 1) {
        cout << "YES" << endl;
        cout << a << " " << b << " " << c + rem << "\n";
    }
    else if (rem % 3 == 2 &&  (b + rem) !=  c) { 
        cout << "YES" << endl;
        cout << a << " " << b + rem << " " << c << endl;
    }
    else {
        cout << "NO" << endl;
    }
}


signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    int test_case = 1;
    cin >> test_case;
    while(test_case--) solve();
}