#include<bits/stdc++.h>

using namespace std;
int main(void){
    double r;
    cin >> r;
    cout << fixed;
    // M_PIは円周率を表す
    cout << setprecision(6) << r*r*M_PI << " " << 2*r*M_PI << endl;
    return 0;
}
