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
    vi a(n), b(n);
    for(auto &i: a) cin>>i;
    for(auto &i: b) cin>>i;

    ll t = max(a[0], b[0]);
    int s = max(a[0], b[0]);
    f(i,1,n){
        if(s==a[0]){
            if(i&1) t += b[i];
            else t += a[i];
        }
        else{
            if((i&1)==0) t += b[i];
            else t += a[i];
        }
    }

    cout<<t<<nl;
}

int main(){
    int t=1; 
    cin>>t;
    while(t--){
        solve();
    }
}