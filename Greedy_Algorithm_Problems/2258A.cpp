#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl "\n"
#define vi vector<int>
#define f(i, a, b) for (ll i = a; i < b; i++)
#define pb push_back
#define ppb pop_back
#define all(x) x.begin(), x.end() 
#define mod 1000000007
#define ff first 
#define ss second

int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b, a%b);
}

void solve() {
    int n, m;
    cin >> n >> m;

    vi a(n);

    for (int &x : a)
        cin >> x;

    sort(a.begin(), a.end());

    int mx = 0;

    for (int i = 0; i < n; ) {
        int x = a[i];

        // Find frequency of x
        int j = upper_bound(a.begin() + i, a.end(), x) - a.begin();
        int freq = j - i;

        int t = (x & 1) ? x : x / 2;

        // Number of elements >= t
        int pos = lower_bound(a.begin(), a.end(), t) - a.begin();
        int ct = n - pos;

        int val = ((x & 1) ? freq : 2 * freq) + ct - freq;

        mx = max(mx, val);

        i = j;
    }

    cout << mx << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}