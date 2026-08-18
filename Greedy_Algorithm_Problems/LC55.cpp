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
  1st obs : a[i] = x => then we can go anywhere from range [1,2,....., x-1, x]
  2nd obs : since a[i] >= 0 => if there is no zero in the array then there will always possibility to reach n.
  3rd obs: if we are able reach at n from some index k => then our problem converts into a subproblem to -> i,e try all possibilty to reach k instead of n from any index upto k-1;

  bcz if we reach k this implies we will reach n. here the problem solved

*/

void solve(){
    int n; cin>>n;
    vi a(n);
    for(auto &i:a) cin>>i;
    int t = n - 1;
    for(int i=n-1;i>=0;i--){
        if(a[i] >= (t - i)){
            t = i;
        }
    }
    if(!t) cout<<"YES\n";
    else cout<<"NO\n";
}

int main(){
    int t=1; 
    cin>>t;
    while(t--){
        solve();
    }
}