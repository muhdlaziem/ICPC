#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,sumX=0,sumY=0,sumZ=0;
    scanf("%d",&N);
    while(N--){
        int x,y,z;

        scanf("%d%d%d",&x,&y,&z);
        sumX+=x,sumY+=y, sumZ+=z;
    }
    //  cout<<sumX<<" "<<sumY<<" "<<sumZ<<endl;
    printf(sumX||sumY||sumZ ? "NO\n" : "YES\n");

    return 0;
}