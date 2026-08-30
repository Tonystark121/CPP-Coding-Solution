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
    int n, k; cin>>n>>k;
    string s; cin>>s;  
    // if k >= 21 => it is always possible to covnert all character to 'a' lowest lexographical string. of that is the case print all a's of size n.
    if(k>=25) {
        f(i,0,n) cout<<'a';
        cout<<nl; return;
    }
    // since we need lexographical smallest than order clearly matters
    // lets find first character which takes more than k steps to move to a and also keep track of maximum value <= k. because all <= k in the order can be converted to a easily with mix steps of k. 
    int lm = 0, eI = -1;
    f(i,0,n){
        if(s[i]-'a' <= k) lm = max(lm, s[i]-'a');
        else {
            eI = i;
            break;
        }
    }
    // I find max val <= k and convert all those to 'a' with value <= k. and decrease k by lm.
    k -= lm;
    f(i,0,n){
        if(s[i]-'a' <= lm) s[i] = 'a';
    }

    // we already find first char which is has value greater than k and its index. for remaining k we will try to minimize it so we can get lexographical as minimum as possible. thereforce checked where this can be moved and turn all those with char >= c && <= v into c.
    char c = s[eI];
    int v = s[eI] - 'a';
    while(k){
        c--, k--;
    }
    f(i,0,n){
        if(s[i]-'a' >= (c - 'a')  &&  s[i]-'a' <= v) s[i] = c;
    }

    // finally print the string.
    cout<<s<<nl;
}

int main(){
    int t=1; 
    cin>>t;
    while(t--){
        solve();
    }
}