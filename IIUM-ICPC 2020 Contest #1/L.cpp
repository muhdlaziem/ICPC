#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int N;
    int seq[105];
    scanf("%d",&N);

    for(int i=0; i<N; ++i)
        scanf("%d",&seq[i]);
    
    int minV=1000;

    
    for(int i=1; i<N-1; ++i){
        int maxV=0;

        for(int j=0; j< N-1; ++j){
            if((j+1)==i){
                maxV  = max(seq[j+2]-seq[j],maxV);
                j+=1;

            }
            else{
                maxV = max(seq[j+1]-seq[j],maxV);
            }
        }

        minV = min(maxV,minV);
        // printf("%d %d\n",minV, maxV);
        
    }
    printf("%d\n",minV);
    return 0;
}