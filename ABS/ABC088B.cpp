#include<bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main(void){
    int N,Apoint =0,Bpoint =0;
    cin >> N;
    vector<int>vec(N);
    rep(i,N){
        cin >> vec.at(i);
    }
    
    sort(vec.begin(), vec.end());
    // sortでは小さい順になるため大きい順に直す
    reverse(vec.begin(), vec.end());

    rep(i,N){
        if(i%2 ==0)Apoint += vec.at(i);
        else Bpoint += vec.at(i);
    }

    cout << Apoint - Bpoint << endl;
}