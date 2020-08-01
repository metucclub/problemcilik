#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define ll long long
#define pb push_back
#define pll pair<ll, ll>
#define fi first
#define se second

const int md = (int) 1e9 + 7;
const ll siz = 300005, limi = 1000000000000000000, limi2 = 9;

ll disarda, disardaindex;
ll arr[siz];
ll n, m, k, l;

char getHarf(int x){
    int ra = rand()%26;
    while(ra==x){
        ra=rand()%26;
    }
    return 'a'+ra;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    ofstream file;

    for(int i=3;i<=40;i++){
        file.open ("in/"+to_string(i)+".in");
        n=i*2500;
        file << n << endl;
        disarda = rand()%26;
        disardaindex = rand()%n;
        while(n--) {
            if(n==disardaindex) file<<(char)('a'+disarda);
            else file << getHarf(disarda);
        }

        file.close();
    }
    
}