#include<bits/stdc++.h>
using namespace std;

int main(void){
    int n,m,f;
    cin >> n >> m >> f;
    while(true){
        if(n == -1 && m == -1 && f == -1)break;

        if(n == -1 || m == -1)cout << "F" <<endl;
        else if(n+m >= 80)cout << "A" << endl;
        else if(n+m >= 65)cout << "B" << endl;
        else if(n+m >= 50)cout << "C" << endl;
        else if(n+m >= 30 && f>=50)cout << "C" << endl;
        else if(n+m >= 30)cout << "D" << endl;
        else cout << "F" << endl;

        cin >> n >> m >> f;
    }
}