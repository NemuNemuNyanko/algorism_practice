#include<bits/stdc++.h>

using namespace std;
int main(void){
    int a,b;
    char op;
    while(true){
        cin >> a >> op >> b;
        // char型は' 'ではなく" "
        if(op == '?')break;
        else if(op == '+')cout<< a+b << endl;
        else if(op == '-')cout<< a-b << endl;
        else if(op == '*')cout<< a*b << endl;
        else cout<< a/b << endl;
    }
    return 0;
}
