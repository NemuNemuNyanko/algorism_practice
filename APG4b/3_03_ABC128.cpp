#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
    int N;
    cin >> N;
    vector<tuple<string,int,int>> data(N);

    rep(i,N){
        string S;
        int P;
        cin >> S >> P;
        // -をつけることで高い順にソートされるようにする
        // ソートした時の順番を知るために i+1 を格納
        data.at(i) = make_tuple(S, -P,i+1);
    }
    
    sort(data.begin(),data.end());

    rep(i,N){
        int x;
        tie(ignore,ignore,x) = data.at(i);
        cout << x << endl;
    }
}
