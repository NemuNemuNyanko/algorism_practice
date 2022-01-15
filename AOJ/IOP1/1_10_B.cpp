#include<bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)


int main(void){
    int a,b,C;
    cin >> a >> b >> C;
    double S = a * b * sin(C * M_PI / 180.0) / 2;
    double L = a + b + sqrt(a*a+b*b - 2*a*b*cos(C * M_PI / 180.0));
    double h = 2*S/a;

    cout << fixed;
    cout << setprecision(4) << S << endl;
    cout << L << endl;
    cout << h << endl;
}