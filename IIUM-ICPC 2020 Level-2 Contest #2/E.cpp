#include <bits/stdc++.h>
#define ll long long
using namespace std;

int N;
vector<int> res;
bool Prime[100005];
bool dp[20];
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

void solve(int cycle){
    if(res.size()==N){
        if(Prime[1+res[N-1]]){
            for(int i=0 ; i<N ; ++i){
                printf("%d ",res[i]);
            }
            printf("\n");

        }
    }

    for(int i = 2; i<=N; ++i){
        if(Prime[res[cycle-1]+i] && !dp[i]){
            res.push_back(i);
            dp[i]=true;
            solve(i+1);
            res.pop_back();
            dp[i]=false;
            // solve(i);
        }
    }

}

int main(){
    int cnt=0;
    genPrime();
    while(scanf("%d",&N)!=EOF){

        fill(dp,dp+20,false);
        
        res.clear();
        printf("Case %d:\n",cnt++);
        dp[1]=true;
        res.push_back(1);
        solve(1);
    }
   
   
    return 0;
}