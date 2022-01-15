#include<bits/stdc++.h>
using namespace std;

int main(void){
    vector<int> vec(26);
    
    char c;
    while(cin >> c){
        
        if(islower(c)){
            int n = c - 'a';
            vec.at(n)++;
        }
        else if(isupper(c)){
            int n = c - 'A';
            vec.at(n)++;
        }

    }

    for(int i=0;i<26;i++){
        char alpha = 97 + i;
        cout << alpha << " : " << vec.at(i) << endl;
    }

}