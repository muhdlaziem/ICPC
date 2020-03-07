#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int N,a,g, sumA=0, sumG=0;
    scanf("%d",&N);

    string res="";
    while(N--){
        scanf("%d%d",&a,&g);

        if(abs((sumA+a)-sumG)<=500){
            res+='A';
            sumA+=a;
        }
        else{
            res+='G';
            sumG+=g;
        }
        
    }
    // cout<< sumA <<" "<<sumG<<endl;
    if(abs(sumA-sumG)>500)
        printf("-1\n");
    else cout<< res << endl;
    return 0;
}