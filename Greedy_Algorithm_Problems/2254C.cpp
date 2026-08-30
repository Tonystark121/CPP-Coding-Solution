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

/*
    Key concepts & Good question to improve problem solving knack.
        1. think in two ways: locally based on a particular character.
        2. globally based on some segment, parity, other defined parameters.
        3. try to figure invariant property, order preserving, 

    Ask this questions before when solving a problem:
        1. What quantity does one operation change?
        2. What does that preserve?
        3. What objects cannot cross?
        4. If I know the final positions, what is the minimum cost? or how final position will look alike
        5. lower/upper bound.
*/

void solve(){
    int n; cin>>n;
    string a,b; cin>>a>>b;
    vi parityA[2], parityB[2];
    f(i,0,n){
        if(a[i]=='1') parityA[i&1].pb(i);
        if(b[i]=='1') parityB[i&1].pb(i);
    }
    for(int i=0;i<2;i++){
        if(parityA[i].size()!=parityB[i].size()) {
            cout<<-1<<nl; return;
        }
    }
    ll ans = 0;
    f(i,0,2){
        f(j, 0, parityA[i].size()){
            ans += abs(parityA[i][j] - parityB[i][j]) / 2;
        }
    }

    cout<<ans<<nl;
}

int main(){
    int t; 
    cin>>t;
    while(t--){
        solve();
    }
}