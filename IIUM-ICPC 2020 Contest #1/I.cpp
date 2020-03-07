#include <bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin >> S;
    if(isupper(S[0]))
        cout<<S<<endl;
    else{
        S[0]= toupper(S[0]);
        cout<<S<<endl;
    }

    return 0;
}