#include<bits/stdc++.h>
using namespace std;

#define f(i,a,b) for(int i=a;i<b;i++)
#define ll long long
#define nl "\n"
#define vi vector<ll>



//Memoization approach
// int n;
// vi dp;

// int fib(int n){
//     //base case
//     if(n==1) return 1;
//     if(n==0) return 0; 
//     //memoization.
//     if(dp[n]!=-1) return dp[n];

//     return dp[n] = fib(n-1) + 1ll +  fib(n-2);
// }

// void solve(){
//     cin>>n;
//     dp.assign(n+1, -1);
//     fib(n);
//     cout<<dp[n]<<nl;
// }

//bottom up approach
void solve(){

    //approach 1.

    int n; cin>>n;
    vi dp(n+1);
    dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    cout<<dp[n]<<nl;

    //approach 2.
    //int n; cin>>n;
    ll a = 0, b = 1, c;
    for(int i=2;i<=n;i++){
        c = a + b;
        a = b;
        b = c;
    }

    cout<<c<<nl;
}

int main(){
    auto start = chrono :: high_resolution_clock::now();
    int t=1; 
    //cin>>t;
    while(t--){
        solve();
    }

    auto end = chrono :: high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(end - start);
    cout << "Execution time: " << duration.count() << " ms" << nl;

}