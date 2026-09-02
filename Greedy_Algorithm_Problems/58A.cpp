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
    string s; cin>>s;
    string t = "hello";
    int j = 0;
    f(i,0,s.size()){
        if(s[i]==t[j]) j++;
    }

    if(j==5) cout<<"YES\n";
    else cout<<"NO\n";
}

int main(){
    int t=1; 
    //cin>>t;
    while(t--){
        solve();
    }
}