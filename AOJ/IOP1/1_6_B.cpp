#include<bits/stdc++.h>

using namespace std;
int main(void){
    // AOJでは一つ開けて>>ではなく> >ではないとダメ
    vector<vector<int> > vec(4,vector<int>(13));
    int n;
    cin >> n;

    char play;
    int num;
    for(int i=0;i<n;i++){
        cin >> play >> num;
        switch(play){
            case 'S':
                vec.at(0).at(num-1)++;
                break;
            case 'H':
                vec.at(1).at(num-1)++;
                break;
            case 'C':
                vec.at(2).at(num-1)++;
                break;
            case 'D':
                vec.at(3).at(num-1)++;
                break;


        }
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<13;j++){
            if(vec.at(i).at(j) == 0){
                switch(i){
                    case 0:
                        cout << "S " << j+1 << endl;
                        break;
                    case 1:
                        cout << "H " << j+1 << endl;
                        break;
                    case 2:
                        cout << "C " << j+1 << endl;
                        break;
                    case 3:
                        cout << "D " << j+1 << endl;
                        break;
                }
            }
        }
    }
}
