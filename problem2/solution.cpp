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

ll n, m, k, l;
string s;
int arr[26];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++){
        if(arr[s[i]]==2) continue;
        arr[s[i]]++;
    }

    for(int i=0;i<n;i++){
        if(arr[s[i]]==1){
            cout<<s[i]<<' '<<i+1;
            return 0;
        }
    }
}


// adazdgada

// a b c d e f g h ... z
// 4 0 0 3 0 0 1 0 ... 1 