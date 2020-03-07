#include <bits/stdc++.h>
#define ll long long
using namespace std;
    
int main(){
    int n, inp;
    ll sum=0, mat[500005];
    fill(mat,mat+500005,0);
    
    scanf("%d",&n);
    for(int i=1; i<=n; ++i){
        scanf("%d",&inp);
        mat[i]= mat[i-1] +inp;
        sum +=inp;
    }
    // for(int i=1; i<=n; ++i){
    //    printf("%lld ", mat[i]);
    // }
    // printf("\n");
    ll res=0,cnt=0;
    
    for(ll i=1; i<n; ++i){
        if(mat[i]*3 == 2*sum)
            res +=cnt;
        if(mat[i]*3 == sum)  //1/3
            cnt++;
        
    // printf("%d %d\n",res,cnt);
    
    }
    
    
    cout<< res << endl;
    return 0;
}