/*
Given N activities with start & end time. Select the maximum number of activities that can be performed assuming you can work on one task at a time.

Claim : choose task base on length of task, do smaller task which help to perform more jobs.
    counter case: [1, 7], [6, 9], [8, 10] => in this case of we select (6,9) only one task while if we select [1, 7] & [8, 7] then we are able to perform two task at a time.


claim: sort task based on end time, count non-ovelapping tasks.
        proof: lets say point [s1, e1] & [s2, e2]  where e2 > e2 irrsespective of where s1 & s2 starts. clearly space from e1 to infinity is more than e2 to infinity is more and also contain e2 to infinity there giving more chance to pick better solution. hence greedily solve the problem accurately.
*/

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
    int n; cin>>n;
    vector<pair<int,int>> arr;
    f(i,0,n){
        int x,y; cin>>x>>y;
        arr.pb({x,y});
    }

    sort(all(arr), [&](const pair<int,int>a, pair<int,int>b){
        return a.second < b.second;
    });

    int ct = 1;
    int last = arr[0].second;

    f(i,1,n){
        if (arr[i].first >= last) {
            ct++;
            last = arr[i].second;
        }
    }

    cout<<ct<<nl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}