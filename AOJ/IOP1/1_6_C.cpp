#include<bits/stdc++.h>

using namespace std;
int main(void){
    // AOJでは一つ開けて>>ではなく> >ではないとダメ
    vector<vector<vector<int> > > data(4, vector<vector<int> >(3, vector<int>(10)));
    int n;
    cin >> n;
    
    int  b,f,r,v;
    for(int i=0;i<n;i++){
        cin >> b>>f>>r>>v;
        data.at(b-1).at(f-1).at(r-1) += v;
    }

    for(int i=0;i<4;i++){

        for(int j=0;j<3;j++){
            for(int t=0;t<10;t++){
                cout << " " << data.at(i).at(j).at(t);
            }
            cout << endl;
        }
        if(i!=3)cout << "####################" << endl;
    }
}