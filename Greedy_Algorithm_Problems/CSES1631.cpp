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
    vi a(n);
    for(auto &i:a) cin>>i;
    sort(all(a));
    ll ts = 0;
    f(i,0,n) ts += a[i];
    cout<<max(ts, 2*a[n-1])<<nl;
}


int main(){
    int t=1; 
    // cin>>t;
    while(t--){
        solve();
    }
}