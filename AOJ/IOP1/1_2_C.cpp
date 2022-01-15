#include<bits/stdc++.h>

using namespace std;
int main(void){
    int n = 3;
    vector<int> vec(n);
    for (int i=0;i<n;i++)cin >> vec.at(i);

    for (int i=0;i<n-1;i++){
        for (int s=0;s<n-1-i;s++){
            if(vec.at(s) > vec.at(s+1)){
                int tmp = vec.at(s);
                vec.at(s) = vec.at(s+1);
                vec.at(s+1) = tmp;
            }
        }
    }

    for (int i=0;i<n-1;i++)cout << vec.at(i) << " ";
    cout << vec.at(n-1) << endl;
}
