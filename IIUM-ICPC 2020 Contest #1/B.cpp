#include <bits/stdc++.h>
using namespace std;

int main(){
    int mat[6][6],x,y;

    for(int i=0;i<5;++i){
        for(int j=0 ; j<5 ; ++j){
            scanf("%d",&mat[i][j]);
            if(mat[i][j]){
                x=i,y=j;
            }
        }
    }
    printf("%d\n",abs(x-2)+abs(y-2));
    
    return 0;
}