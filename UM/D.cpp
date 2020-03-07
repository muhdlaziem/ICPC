#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,maxV=0;
    int coor[1005][2];
    int flag[1005*1005];
    memset(flag,0, sizeof flag);
    cin >> n;
    for(int i = 0; i< n ; ++i){
        cin >> coor[i][0] >> coor[i][1];
        maxV = max(maxV,coor[i][0]);
        maxV = max(maxV,coor[i][1]);

    }
    for(int i = 0; i< n ; ++i){
        cin >> coor[i][0] >> coor[i][1];
        maxV = max(maxV,coor[i][0]);
        maxV = max(maxV,coor[i][1]);

    }
    // for(int i = 0; i< n ; ++i){
    //     cout << coor[i][0] <<coor[i][1]<<endl;
    // }
    double sum=0; int cnt=0;
    for(int i = 0; i< n-1 ; ++i){
        for(int j = i ; j< n-1 ; ++j){
            sum += sqrt(pow(coor[j][0]-coor[j+1][0],2) + pow(coor[j][1]-coor[j+1][1],2));
            // cout << sqrt(pow(coor[j][0]-coor[j+1][0],2) + pow(coor[j][1]-coor[j+1][1],2));
            cnt++;
        }
    }
    for(int i = 0; i< n-1 ; ++i){
        for(int j = i ; j< n-1 ; ++j){
            if(sqrt(pow(coor[j][0]-coor[j+1][0],2) + pow(coor[j][1]-coor[j+1][1],2))> sum/cnt){
                flag[j]=1,flag[j+1]=1;
            }
            // cout << sqrt(pow(coor[j][0]-coor[j+1][0],2) + pow(coor[j][1]-coor[j+1][1],2));
        }
    }
    for(int i = 0; i< n ; ++i){
        if(flag[i])
            cout << coor[i][0] <<coor[i][1]<<endl;
    }
    printf("%lf, %lf",sum,sum/cnt);


    return 0;
}