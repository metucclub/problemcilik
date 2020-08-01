#include <bits/stdc++.h>

using namespace std;

const long long limi = 1000000000, limi2 = 100000000, limi3=100000;

long long n, m, k, l;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    ofstream file;
    
    for(int i=3;i<=10;i++){
        file.open ("in/"+to_string(i)+".in");
        n=i*20;
        file << n << endl;
        while(n--) file << rand()%(limi3)+1 << ' ' << rand()%limi3+1 <<endl;
        file.close();
    }
    
    for(int i=10;i<=30;i++){
        file.open ("in/"+to_string(i)+".in");
        n=i*20;
        file << n << endl;
        while(n--) file << rand()%limi+1 << ' ' << rand()%limi+1 <<endl;
        file.close();
    }

    for(int i=31;i<=35;i++){
        file.open ("in/"+to_string(i)+".in");
        n=i*20;
        file << n << endl;
        while(n--) file << (limi-limi2)+rand()%limi2+1 << ' ' << (limi-limi2)+rand()%limi2+1 <<endl;
        file.close();
    }

    for(int i=36;i<=40;i++){
        file.open ("in/"+to_string(i)+".in");
        n=i*2500;
        file << n << endl;
        while(n--) file << (-limi)+rand()%(2*limi)+1 << ' ' << (-limi)+rand()%(2*limi)+1 <<endl;
        file.close();
    }


    // 5
    // 14
    // 46
    // 34
    // 5

}