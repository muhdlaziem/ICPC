#include <bits/stdc++.h>
using namespace std;

bool isDiff(int year){
    set<int> digits;
    set <int> :: iterator itr; 
    while(year){
        digits.insert(year%10);
        year = year/10;
    }
    // for(itr= digits.begin(); itr!=digits.end(); ++itr)
    //     cout << *itr; 
    // cout<<digits.size()<<endl;
    if(digits.size()==4) return true;
    else return false;
}
int main(){
    int Y;
    scanf("%d", &Y);
    for(int i = Y+1; i<=90000 ; ++i){
        if(isDiff(i)){
            printf("%d",i); return 0;
        }
    }
    return 0;
}