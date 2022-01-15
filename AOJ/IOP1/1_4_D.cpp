#include<bits/stdc++.h>

using namespace std;
int main(void){
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin >> vec.at(i);
    }
    int min = vec.at(0),max= vec.at(0);
    long long sum = 0;
    for(int i=0;i<n;i++){
        int x = vec.at(i);
        if(x > max)max = x;
        else if(x < min)min = x;
        sum += x;
    }
    cout << min << " "<< max << " " <<sum << endl;
    return 0;
}
