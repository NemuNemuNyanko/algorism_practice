#include<bits/stdc++.h>

using namespace std;
int main(void){
    int a,b;
    cin >>a>>b;
    cout << a/b <<" "<< a%b;
    double x =a,y=b;
    cout << fixed;
    cout <<" "<< setprecision(5) << x/y<<endl;
    // https://marycore.jp/prog/cpp/stream-format-float/ 参照
    return 0;
}
