#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main(){
    int N,v,flag = 0;
    cin >> N >> v;
    vector<int> vec(N);

    rep(i,N){
        cin >> vec.at(i);
    }

    rep(i,N){
        if(vec.at(i) == v){
            flag++;
            break;
        }
    }

    if(flag)cout << "Yes" << endl;
    else cout << "No" << endl;
}