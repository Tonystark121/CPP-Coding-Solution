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
    int ts = 2 * (pow(2, n) - 1);
    int s1 = 0;
    for(int i=1;i<=n/2;i++){
        s1 += pow(2, n-i);
    }

    cout<<(ts - 2 * s1)<<nl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}