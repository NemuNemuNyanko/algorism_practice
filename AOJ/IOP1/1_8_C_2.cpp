#include<bits/stdc++.h>
using namespace std;

int main(void){
    vector<int> vec(26);
    
    char str[1200];
    cin.getline(str, sizeof(str));

    for(int i=0;i<1200;i++){
        char c = str[i];
        if(islower(c)){
            int n = c - 'a';
            vec.at(n)++;
        }
        else if(isupper(c)){
            int n = c - 'A';
            vec.at(n)++;
        }
        // '\0'はEOS
        if(c == '\0')break;

    }

    for(int i=0;i<26;i++){
        char alpha = 97 + i;
        cout << alpha << " : " << vec.at(i) << endl;
    }

}