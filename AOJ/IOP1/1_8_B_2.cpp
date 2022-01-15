#include<bits/stdc++.h>
using namespace std;

int main(void){

    long long int x;
    while(true){
        cin >> x;
        if(x == 0)break;
        int num = 0;
        while(x != 0){
            num += x %10;
            x /= 10;
        }
        cout << num << endl;
    }
}