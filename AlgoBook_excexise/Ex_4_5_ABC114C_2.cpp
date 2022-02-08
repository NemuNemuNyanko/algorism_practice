#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int count(long long N,long long now,bool flag3,bool flag5,bool flag7){
    if(now > N)return 0;
    int root = count(N,10*now+3,true,flag5,flag7)+count(N,10*now+5,flag3,true,flag7)+count(N,10*now+7,flag3,flag5,true);
    if(flag3 && flag5 && flag7) return root + 1;
    else return root;
}

int main(){
    long long N;
    cin >> N;

    int ans = count(N,0,false,false,false);
    cout << ans << endl;

    return 0;
}