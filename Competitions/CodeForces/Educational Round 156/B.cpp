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


double get_distance(int x1, int y1, int x2, int y2) {

    double x_squared = pow(abs(x2 - x1), 2);
    double y_squared = pow(abs(y2 - y1), 2);
    double dist = sqrt( x_squared + y_squared);
    return dist;
}

void solve() {
    int dest_start, dest_end, lan_a_start , lan_a_end, lan_b_start, lan_b_end;
    cin >> dest_start >> dest_end ;
    cin >> lan_a_start >> lan_a_end ;
    cin >> lan_b_start >> lan_b_end ;

    double min_current_lan = min( get_distance(0 , 0 , lan_a_start, lan_a_end), get_distance(0,0, lan_b_start, lan_b_end) );
    double min_destination_lan = min( get_distance(dest_start , dest_end , lan_a_start, lan_a_end), get_distance( dest_start,dest_end, lan_b_start, lan_b_end) );

    double max_lan_power = max(min_current_lan, min_destination_lan);

    double dist_a_b = get_distance(lan_a_start, lan_a_end, lan_b_start, lan_b_end);

    if(dist_a_b <= (2 * max_lan_power)) {
        cout << max_lan_power << "\n";
    }
    else {
        cout << dist_a_b / 2 << "\n";
    }
}


signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    int test_case = 1;
    cin >> test_case;
    while(test_case--) solve();
}  