#include<bits/stdc++.h>
using namespace std;

int main(void){

    char c[1200];

    cin.getline(c, sizeof(c));;
    char ch;

    for(int i=0;i<1200;i++){
        ch = c[i];
        if(ch >='A' && ch <= 'Z')c[i] += 32;
        else if(ch >='a' && ch <= 'z')c[i] -= 32;
    }

    cout << c << endl;
}