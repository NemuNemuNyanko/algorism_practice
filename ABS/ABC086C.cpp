#include<bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main(void){
    int N;
    cin >> N;
    vector<int> x(N+1);
    vector<int> y(N+1);
    vector<int> t(N+1);
    x.at(0) = 0;
    y.at(0) = 0;
    t.at(0) = 0;
    rep(i,N){
        cin >> t.at(i+1) >> x.at(i+1) >> y.at(i+1);
    }

    bool judge = true;
    int dist,time;

    rep(i,N){
        dist = abs(x.at(i+1) - x.at(i)) + abs(y.at(i+1) - y.at(i));
        time = t.at(i+1) - t.at(i);
        judge = (time>=dist) && ((time-dist) %2 ==0) && judge;
    }
    if(judge)cout << "Yes" << endl;
    else cout << "No" << endl;
}