#include <bits/stdc++.h>
using namespace std;

int main(){
   int N;
   scanf("%d",&N);

   while(N--){
        string S;
        cin >>S;
        sort(S.begin(),S.end());
            bool isTrue =true;
        for(int i=0; i<S.length()-1; ++i){
            if(abs(S[i]-S[i+1])!=1) {isTrue=false;break;}
        }
        if(isTrue) printf("Yes\n");
        else printf("No\n");
   }
   return 0;
}