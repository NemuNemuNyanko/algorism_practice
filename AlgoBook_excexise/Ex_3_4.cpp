#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main(){
    int N,min = 10101010,max = -55555555;
    cin >> N;
    vector<int> vec(N);

    rep(i,N){
        cin >> vec.at(i);
    }

    rep(i,N){
        int x = vec.at(i);
        if(x < min)min = x;
        if(x > max)max = x;
    }
    cout << max - min << endl;
}