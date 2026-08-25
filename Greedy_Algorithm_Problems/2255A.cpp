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
    int n, k; cin>>n>>k;
    string s; cin>>s;
    int r = 0, b = 0;
    f(i,0,2*n){
        int j = (i + 1) % (2 * n);
        if(s[i]=='0') continue;

        if(s[j]=='0'){
            if(i%2==0) r++;
            else b++;
        }
        else{
            if(i%2==0) b++;
            else r++;
        }
    }

    cout<<r<<" "<<b<<nl;
}

int main(){
    int t; 
    cin>>t;
    while(t--){
        solve();
    }
}