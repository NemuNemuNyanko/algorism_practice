#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

vector<long long> memo(10000,-1);

int trib(int n){
    if(n == 0) return 0;
    if(n == 1) return 0;
    if(n == 2) return 1;

    if(memo.at(n)!= -1) return memo.at(n);
    memo.at(n) = trib(n-1)+trib(n-2)+trib(n-3);
    return memo.at(n);
}

int main(){
    int n;
    cin >> n;
    cout << trib(n) << endl;
    return 0;
}