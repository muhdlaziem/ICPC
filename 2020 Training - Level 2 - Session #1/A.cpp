#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int N;
    cin >> N;
    while(N--){
        string S;
        cin >> S;
        int M = count(S.begin(),S.end(),'M');
        int F = count(S.begin(),S.end(),'F');
        
        if((M==3 || M==4 || M==6 || M==7 || M==10 || M==0) && (F==3 || F==4 || F==6 || F==7 || F==0 || F==10))
            printf("Yes\n");
        else
            printf("No\n");
    }
    

    return 0;
}