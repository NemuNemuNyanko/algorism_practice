#include<bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main(void){
    int N,count = 0;
    bool judge = true;

    cin >> N;
    vector<int> vec(N);
    rep(i,N){
        cin >> vec.at(i);
    }

    while(judge){
        rep(i,N){
            judge = judge && (vec.at(i)%2 == 0);
            vec.at(i) /= 2;
        }
        if(judge)count++;
    }

    cout << count << endl;
}