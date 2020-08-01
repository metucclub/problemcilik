#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define ll long long
#define pb push_back
#define pll pair<ll, ll>
#define fi first
#define se second

const int md = (int) 1e9 + 7;
const int siz = 300005;

ll arr[siz];
ll n, m, k, l;
ll enBuyuk3 = 1;

int isFantastic(ll k){
    ll kopya3 = enBuyuk3;
    for(int i=0;i<38;i++){
        if(k<kopya3) kopya3/=3;
        else if(k/kopya3>1) return 0;
        else {
            k-=kopya3;  
            kopya3/=3;
        }
    }
    return 1;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    for(int i=1;i<38;i++){
        enBuyuk3 *= 3;
    }
    // cin>>n;
    for(int i=1;i<=81;i++){
        // cin>>k;
        ll result=0;
        for(int j=1;j<=i;j++){
            result+=isFantastic(j);
        }
        cout<<i<<'\t'<<result<<endl;
    }
        
}