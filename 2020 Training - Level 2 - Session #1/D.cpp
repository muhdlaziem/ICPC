#include <bits/stdc++.h>
#define ll long long
using namespace std;

int N,K;
string inp;
bool isPalindrome(string S){
    string temp = S;
    reverse(temp.begin(),temp.end());
    if(S == temp){
        return true;
    }
    return false;
}
void gen(string S){
    if(S.length()>N) return;

    if(isPalindrome(S) && S.length()!=0) cout<<S<<endl;

    for(int i=0 ; i<inp.length(); ++i)
        gen(S + inp[i]);
}
int main(){
    scanf("%d%d",&N, &K);
    // cout<< isPalindrome("A")<< isPalindrome("B")<<endl;
    // int cnt=0;
    while(K--){
        char x;
        cin >> x;
        // cout<< x;
        inp+=x;
        // cnt++;
    }
    // cout<<inp<<endl;
    sort(inp.begin(),inp.end());
    gen("");
    return 0;
}