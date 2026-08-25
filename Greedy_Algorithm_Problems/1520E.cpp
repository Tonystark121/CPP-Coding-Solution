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
    string s; cin>>s;
    vi a;
    f(i,0,n){
        if(s[i]=='*'){
            a.pb(i - a.size());
        }

    }
    if(a.empty()){
        cout<<0<<nl;
        return;
    }
    int m;
    if(a.size() % 2 == 1){
        m = a[a.size() / 2];
    }
    else m = (a[a.size() / 2] + a[a.size() / 2 - 1])/2;

    ll res = 0;
    for(auto it:a) res += abs(it - m);

    cout<<res<<nl;
}

int main(){
    int t; 
    cin>>t;
    while(t--){
        solve();
    }
}