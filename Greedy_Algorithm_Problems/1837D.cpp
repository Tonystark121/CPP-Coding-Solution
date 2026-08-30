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
  Properties of Regular Bracket sequence
        1. Number of '(' = Number of ')'
        2. At any point sum of '(' >= sum of ')'
        3. RBS + RBS => RBS

   Properties of Reverse Regular Bracket sequence
        1. Number of '(' = Number of ')'
        2. At any point sum of ')' >= sum of '('
        3. RRBS + RRBS => RRBS

    consider graph -> && see problem: 1837 for reference.
   
 */

void solve(){

    // method 2.
    int n; cin>>n;
    string s; cin>>s;

    int t = 0;
    for(auto it:s){
        if(it==')') t--;
        else t++;
    }
    if(t!=0){cout<<-1<<nl; return;}
    vi res(n);

    int ct = 0, a=1, b=2;
    if(s[0]==')') swap(a,b);

    f(i,0,n){
        if(s[i]=='('){
            ct++;
            if(ct>0) res[i]=a;
            else res[i]=b;
        }
        else{
            ct--;
            if(ct < 0) res[i]=b;
            else res[i] = a;
        }
    }
    if(*max_element(all(res))==*min_element(all(res))) cout<<1<<nl;
    else cout<<2<<nl;

    for(auto it: res) cout<<it<<" ";
    cout<<nl;

    // method 1 - my method
    // int n; cin>>n;
    // string s; cin>>s;
    // vi res(n,1);
    // map<int,int>mp;
    // int t=0, cr=0;
    // for(int i=0;i<n;i++){
    //     if(s[i]=='('){
    //         if(t<0) res[i]=2;
    //         t += 1;
    //     }
    //     else{
    //         t -= 1;
    //     }
    //     if(t<0) res[i]=2;
    //     mp[res[i]]++;
    // }
    // if(t!=0) {cout<<-1<<nl;}
    // else{
    //     cout<<mp.size()<<nl;
    //     if(mp.size()==1){
    //         for(auto it:res) cout<<1<<" ";
    //     }
    //     else for(auto it:res) cout<<it<<" ";
    //     cout<<nl;
    // }
}

int main(){
    int t; 
    cin>>t;
    while(t--){
        solve();
    }
}