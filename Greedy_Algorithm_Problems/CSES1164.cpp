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
    int n;
    cin >> n;

    vector<pair<int,int>> t(n);

    for(int i = 0; i < n; i++){
        cin >> t[i].first >> t[i].second;
    }

    sort(t.begin(), t.end());

    vector<int> res(n);
    int ct = 0;

    multiset<pair<int,int>> r;

    for(int i = 0; i < n; i++){
        int s = t[i].first;
        int e = t[i].second;

        auto it = r.upper_bound({s, INT_MAX});

        if(it != r.begin()){
            --it;

            if(it->first < s){
                int room = it->second;

                r.erase(it);
                r.insert({e, room});

                res[i] = room;
                continue;
            }
        }

        // No available room
        ++ct;
        r.insert({e, ct});
        res[i] = ct;
    }

    cout << ct << '\n';

    for(int x : res)
        cout << x << ' ';

    cout << '\n';
}


int main(){
    int t=1; 
    // cin>>t;
    while(t--){
        solve();
    }
}