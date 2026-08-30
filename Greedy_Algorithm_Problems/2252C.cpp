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
    int n,m; cin>>n>>m;
    vector<vi> arr(n, vi (m));
    multiset<ll>st;
    vi s(n);
    f(i,0,n) cin>>s[i];
    f(i,0,n){
        f(j,0,m){
            cin>>arr[i][j];
            st.insert(arr[i][j]);
        }
    }
    ll res = m, sum = 0;
    priority_queue<ll, vector<ll>, greater<>> pq;
    for(int i=n-1;i>=0;i--){
        for(auto it: arr[i]){
            pq.push(it);
            sum += it;
        }
        while(!pq.empty() && sum - pq.top() >= s[i] ){
            sum -= pq.top();
            pq.pop();
        }
        res = min(res, (ll)pq.size());
    }
    cout<<res<<nl;
}

int main(){
    int t; 
    cin>>t;
    while(t--){
        solve();
    }
}