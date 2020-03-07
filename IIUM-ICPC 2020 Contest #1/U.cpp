#include <bits/stdc++.h>
using namespace std;

bool Prime[100005];
void genPrime(){
    Prime[0]= false,Prime[1]=false;
    fill(Prime + 2, Prime + 100005, true);
    for(int i=2 ; i*i <100005; ++i){
        if(Prime[i]){
            for(int j = i+i; j<100005; j+=i){
                Prime[j]=false;
            }
        }
    }
}
int main(){
    int n,m, mat[505][505];
    scanf("%d%d",&n,&m);
    // cout<<isPrime(n)<<" "<<isPrime(m)<<endl;
    int cntC=0,cntR=0;
    for(int i=0; i<n; ++i){
        for(int j=0; j<m; ++j){
            scanf("%d",&mat[i][j]);
        }
    }
    genPrime();
    for(int i=0; i<n; ++i){
        for(int j=0; j<m; ++j){
            int cnt=0;
            for(int k = mat[i][j]; k<=1000000; ++k){
                if(Prime[k]){
                    mat[i][j]=cnt;
                    break;
                }
                cnt++;

            }
        }
    }

    // for(int i=0; i<n; ++i){
    //     for(int j=0; j<m; ++j){
    //         printf("%d ",mat[i][j]);
    //     }
    //     printf("\n");
    // }

    //check row
    int minV=100000;
    for(int i=0; i<n; ++i){
        int cnt =0;
        for(int j=0; j<m; ++j){
            cnt+=mat[i][j];
        }
        minV = min(cnt,minV);
    }
    //check column
    for(int i=0; i<m ;++i){
        int cnt =0;
        for(int j=0; j<n; ++j){
            cnt+=mat[j][i];
        }
        minV = min(cnt,minV);
    }
    printf("%d\n",minV);
    

    return 0;
}