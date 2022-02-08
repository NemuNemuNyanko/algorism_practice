#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

void count(long long N,long long now,int flag,int &counter){
    if(now > N)return;
    if(flag == 0b111)counter++;

    count(N,now*10+3,flag | 0b100,counter);
    count(N,now*10+5,flag | 0b010,counter);
    count(N,now*10+7,flag | 0b001,counter);
}

int main(){
    long long N;
    cin >> N;

    int ans = 0;
    count(N,0,0b000,ans);
    cout << ans << endl;

    return 0;
}