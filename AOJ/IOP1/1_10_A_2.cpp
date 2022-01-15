#include<bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)


int main(void){
    double x1=0,y1=0,x2=0,y2=0;
    cin >> x1 >> y1 >> x2 >> y2;
    printf("%f\n",sqrt((x2 - x1)*(x2 - x1) +  (y2 - y1)*(y2 - y1) ) );
}
