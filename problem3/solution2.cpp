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


int fantasticCount(ll k){
    ll kopya3 = enBuyuk3;
    ll result = 0;
    // cout<<k<<endl;
    for(int i=37;i>=0;i--){
        if(k>=kopya3){
            k-=kopya3;
            if(k>=kopya3) k=kopya3-1;  
            // cout<<k<<' '<<result<<' '<<i<<endl;
            result+=pow(2, i);
        }
        // cout<<result<<endl;
        kopya3/=3;
    }
    return result;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    enBuyuk3=pow(3, 37);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>k;
        ll result=0;
        result=fantasticCount(k);
        cout<<result<<endl;
    }
        
}