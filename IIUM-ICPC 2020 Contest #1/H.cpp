#include <bits/stdc++.h>
using namespace std;

int main(){
    int mat[3][3];
    int in[3][3];
    for(int i=0 ; i<3; ++i)
        for(int j=0 ; j<3; ++j)
            mat[i][j]=1;
    
    for(int i=0 ; i<3; ++i)
        for(int j=0 ; j<3; ++j)
            scanf("%d",&in[i][j]);
    
    for(int i=0 ; i<3; ++i){
        for(int j=0 ; j<3; ++j){
            if(in[i][j]%2!=0){
                in[i][j]=1;
                mat[i][j]= abs(mat[i][j] - in[i][j]);
                if((i-1)>=0)
                    mat[i-1][j]=abs(mat[i-1][j] - in[i][j]);
                if((j-1)>=0)
                    mat[i][j-1]=abs(mat[i][j-1] - in[i][j]);
                if((j+1)<=2)
                    mat[i][j+1]=abs(mat[i][j+1] - in[i][j]);
                if((i+1)<=2)
                    mat[i+1][j]=abs(mat[i+1][j] - in[i][j]);
                
            }
        }

    }
    for(int i=0 ; i<3; ++i){
        for(int j=0; j<3; ++j){
            printf("%d",mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}