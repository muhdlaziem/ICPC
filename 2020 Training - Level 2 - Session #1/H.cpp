#include <bits/stdc++.h>
#define ll long long
using namespace std;

int nums[10];

bool solve(int sum, int idx){
    // printf("%d %d\n", sum, idx);
    if(idx>4)
        return false;
    if(sum==23) return true;
    return solve(sum+nums[idx],idx+1) || solve(sum-nums[idx],idx+1) || solve(sum*nums[idx],idx+1);
    

}

int main(){
    
    for(int i=0; i<5; ++i)
        scanf("%d",&nums[i]);
    sort(nums,nums+5);
    if(solve(0,0)){ 
        printf("Possible\n"); return 0;}
    sort(nums,nums+5,greater<int>());
    if(solve(0,0)){ 
        printf("Possible\n");}
    else printf("Impossible\n");
    return 0;
}