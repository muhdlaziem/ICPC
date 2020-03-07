#include <bits/stdc++.h>
#define ll long long
using namespace std;

int Len,N,tracks[25],ansSum=-1;

vector<int> cur;
vector<int> ans;
vector<int>::iterator it;

void solve(int i, int curSum){
    if(i==N){
        if(curSum > ansSum && curSum<=Len){
            ansSum = curSum;
            ans= cur;
        }
        return;
        
    }
    cur.push_back(tracks[i]);
        // cout << "push:"<<cur.size()<<endl;

    solve(i+1,curSum + tracks[i]);
    cur.pop_back();
        // cout << "pop:"<< cur.size()<<endl;

    solve(i+1,curSum);
}
int main(){
    
    while(cin>>Len>>N){
        
        for(int i=0 ; i<N; ++i)
            scanf("%d",&tracks[i]);
        
        solve(0,0);
        for(it = ans.begin(); it!=ans.end(); ++it)
            printf("%d ",*it);
        printf("sum:%d\n",ansSum);
        ansSum=-1;
        cur.clear();
    }
   
   
    return 0;
}