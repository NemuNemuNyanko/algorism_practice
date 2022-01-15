#include<bits/stdc++.h>
using namespace std;

int main(void){

    string sente;
    string sente2;
    for(int j=0;j<1000;j++){
        cin >> sente;
        if(sente == sente2)break;
        else if(j != 0)cout << " ";
        int n = sente.length();
        char ch;

        for(int i=0;i<n;i++){
            ch = sente[i];
            if(ch >='A' && ch <= 'Z')ch += 32;
            else if(ch >='a' && ch <= 'z')ch -= 32;
            cout << ch;
        }
        sente2 = sente;
    }
    cout << endl;
}