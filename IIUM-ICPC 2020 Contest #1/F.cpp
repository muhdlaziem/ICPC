#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    scanf("%d",&N);

    while(N--){
        int len;
        scanf("%d",&len);
        string num;
        cin >> num;
        bool Exist = false;
        for(int i=0 ; i<len; ++i){
            if(num[i]=='8' && (len-i)>=11){
               Exist=true;break;

            }
        }
        if(Exist) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}