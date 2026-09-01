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
    // what is the use/ role of m here
    vi a;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        a.pb(x);
        mp[x]++;
    }
    sort(all(a));

    // it is given all elements will be. <= m, so store for each m how many element >= m
    vi sf (m+2,0);
    for(int i=m;i>=1;i--){
        sf[i] = mp[i] + sf[i+1];
    }
    int ans = n;
    
    f(i,0,m+1){
        int x = sf[i];
        if(i * 2 <= m) x += mp[2*i];
        ans = max(ans, x);
    }

    cout<<ans<<nl;

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