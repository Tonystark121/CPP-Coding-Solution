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
    int a, b, c; cin>>a>>b>>c;
    int m; cin>>m;
    vi u, p;
    f(i,0,m){
        int x; string y; 
        cin>>x>>y;
        if(y=="USB") u.pb(x);
        else p.pb(x);
    }
    sort(all(u));
    sort(all(p));

    int uSz = u.size();
    int pSz = p.size();

    ll ts = 0, tc = 0;

    int i=0, j=0;
    for(i=0;i<min(uSz,a);i++) ts += u[i], tc++;
    for(j=0;j<min(pSz, b);j++) ts += p[j], tc++;

    for(int k=0;k<c && (i<uSz || j<pSz); k++){
        if(i<uSz && j<pSz){
            if(u[i]<=p[j]) ts += u[i++];
            else ts += p[j++];
            tc++;
        }
        else if(i<uSz && j>=pSz){
            ts += u[i++];
            tc++;
        }
        else if(j<pSz && i>=uSz){
            ts += p[j++];
            tc++;
        }
    }

    cout<<tc<<" "<<ts<<nl;
}

int main(){
    int t=1; 
    //cin>>t;
    while(t--){
        solve();
    }
}