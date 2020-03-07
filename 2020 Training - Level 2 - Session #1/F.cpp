#include <bits/stdc++.h>
#define ll long long
using namespace std;

int N,K, arr[25],sum=0;
bool solve(int sum, int idx){
    if(idx>N)
        return false;
    if(sum%K==0 && sum!=0){return true;}

    return solve(sum+arr[idx],idx+1) || solve(sum, idx+1);
    

}
int main(){
    scanf("%d%d",&N, &K);

    for(int i=0 ; i<N; ++i){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    if(solve(0,0))
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}