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
    int n, m; cin>>n>>m;
    int b = -1, v = -1;
    multiset<int> p,q;
    f(i,0,n) {
        int x; cin>>x,  p.insert(x);
        if(i==0) b = x;
    }
    f(i,0,m) {
        int x; cin>>x,  q.insert(x);
        if(i==m-1) v = x;
    }
    int ct = 1; //
    while (!p.empty() && !q.empty()){
        if(ct&1){ // b's move
            // check whether I'm not on heighest mountain
            if(*p.rbegin()!= b) b = *p.rbegin();
            else{
                // desc other mountain by 1.
                auto it = q.find(v); // find the mountain v standing
                q.erase(it); // delete that mountain
                v--; // desc by 1
                if(v!=0) q.insert(v); // insert new mountain
            }
        }
        else{ // v's move
            // check whether I'm not on heighest mountain
            if(*q.rbegin()!= v) v = *q.rbegin();
            else{
                // desc other mountain by 1.
                auto it = p.find(b); // find the mountain v standing
                p.erase(it); // delete that mountain
                b--; // desc by 1
                if(b!=0) q.insert(b); // insert new mountain
            }
        }
        ct++;
    }

    if(p.empty()) cout<<2<<nl;
    else cout<<1<<nl;

}

int main(){
    int t=1; 
    cin>>t;
    while(t--){
        solve();
    }
}