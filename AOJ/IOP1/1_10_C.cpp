#include<bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)


int main(void){
    int n;
    cout << fixed;
    cout << setprecision(4);
    while(true){
        cin >> n;
        if(n == 0)break;
        vector<double> data(n);
        rep(i,n){
            cin >> data.at(i);
        }

        // *1.0でdoubleに
        double ave = accumulate(data.begin(),data.end(),0) * 1.0 / n;

        vector<double> data2(n);
        rep(i,n){
            data2.at(i) = pow(data.at(i),2.0);
        }
        double ste = sqrt(accumulate(data2.begin(),data2.end(),0)*1.0 / n - pow(ave,2.0));

        cout << ste << endl;
        
    }
}