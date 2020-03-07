#include <bits/stdc++.h>
using namespace std;

int main(){
    int mat[15][15], N;
    scanf("%d",&N);
    for(int i=0;i<N;++i){
        for(int j=0; j<N; ++j){
            if(i==0 || j==0){
                mat[i][j]=1;
            }
        }
    }
    for(int i=1;i<N;++i){
        for(int j=1; j<N; ++j){
            mat[i][j]= mat[i-1][j] + mat[i][j-1];
        }
    }
    // for(int i=0;i<N;++i){
    //     for(int j=0; j<N; ++j)
    //         printf("%d ",mat[i][j]);
    //     printf("\n");
    // }
    printf("%d\n",mat[N-1][N-1]);

    return 0;
}