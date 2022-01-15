#include<bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)


int main(void){
    int n;
    double dis;
    cin >> n;
    cout << fixed << setprecision(5);

    vector<double> x(n);
    vector<double> y(n);

    rep(i,n){
        cin >> x.at(i);
    }
    rep(i,n){
        cin >> y.at(i);
    }

// L1距離
    vector<double> data(n);
    rep(i,n){
        data.at(i) = abs(x.at(i) - y.at(i));
    }
    dis = accumulate(data.begin(),data.end(),0);
    cout << dis << endl;

// L2距離
    rep(i,n){
        data.at(i) = pow(x.at(i) - y.at(i),2.0);
    }
    dis = pow(accumulate(data.begin(),data.end(),0),1.0/2.0);
    cout << dis << endl;

// L3距離,sumで一気に取得するとnunにあるので一つ一つ加算
    dis = 0.0;
    rep(i,n){
        dis += abs(pow(x.at(i) - y.at(i),3.0));
    }
    cout << cbrt(dis) << endl;

// L∞距離
    rep(i,n){
        data.at(i) = abs(x.at(i) - y.at(i));
    }
    dis = *max_element(data.begin(), data.end());
    cout << dis << endl;

}
