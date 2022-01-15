#include<bits/stdc++.h>
using namespace std;

int main(void){
    while(true){
        string num;
        cin >> num;
        if(num == "0")break;
        int n = num.size();
        
        int count =0;
        for(int i=0;i<n;i++){
            int digit = num[i] - '0';
            count += digit;
        }

        cout << count << endl;
    }
}