#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b, c, res=0;

    scanf("%d%d%d%d",&n,&a,&b,&c);

    for(int i = 0; i<=n; ++i){
        for(int j = 0; j<=n; ++j){
            int k = n- i*a - j*b;

            if(k%c==0 && k>=0){
                if(i+j+k/c > res)
                    res= i+j+k/c;
            }
        }
    }
    printf("%d\n",res);

    return 0;
}