#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl "\n"
#define vi vector<int>
#define f(i, a, b) for (int i = a; i < b; i++)
#define pb push_back
#define ppb pop_back
#define all(x) x.begin(), x.end() 
#define mod 1000000007
#define ff first 
#define ss second

void solve(){
    int n; cin>>n;
    vi a(n);
    for(auto &it:a) cin>>it;
    sort(all(a));

    int m1 = a[n / 2], m2 = a[n / 2  - 1];
    ll s1 = 0, s2 = 0;
    f(i,0,n){
        s1 += abs(a[i] - m1);
        if((n & 1) == 0) s2 += abs(a[i] - m2);
    }
    if(n & 1) cout<<s1<<nl;
    else cout<<min(s1, s2)<<nl;
}


int main(){
    int t=1; 
    // cin>>t;
    while(t--){
        solve();
    }
}