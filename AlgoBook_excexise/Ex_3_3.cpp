#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main(){
    int N,v,min = 1145141919,second_min = 1145141919;
    cin >> N;
    vector<int> vec(N);

    rep(i,N){
        cin >> vec.at(i);
    }

    rep(i,N){
        int x = vec.at(i);
        if(x < second_min){
            if(x < min){
                second_min = min;
                min = x;
            }
            else second_min = x;
        }
    }

    cout << second_min << endl;
}