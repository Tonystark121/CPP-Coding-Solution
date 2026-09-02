#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl "\n"
#define vi vector<ll>
#define f(i, a, b) for (ll i = a; i < b; i++)
#define pb push_back
#define ppb pop_back
#define all(x) x.begin(), x.end() 
#define mod 1000000007
#define ff first 
#define ss second

void solve(){
    int n; cin>>n;
    vi ct(1e6 + 10, 0);

    ll mx = 0;
    f(i,0,n){
        ll x; cin>>x;
        mx = max(mx, x);
        ct[x]++;
    }

    f(i,0,mx+10){
        ct[i+1] += ct[i] / 2;
        ct[i] %= 2;
    }
    ll res = 0;
    for(auto it:ct) res += it;
    cout<<res<<nl;
}

int main(){
    int t=1; 
    //cin>>t;
    while(t--){
        solve();
    }
}