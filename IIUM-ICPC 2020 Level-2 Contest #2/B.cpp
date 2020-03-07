#include <bits/stdc++.h>
#define ll long long
using namespace std;

int nums[10];

bool solve(int sum, int idx){
    // printf("%d %d\n", sum, idx);
    if(idx>4)
        return sum == 23;
    
    return solve(sum+nums[idx],idx+1) || solve(sum-nums[idx],idx+1) || solve(sum*nums[idx],idx+1);
    

}
void input(){
    for(int i=0; i<5; ++i)
        scanf("%d",&nums[i]);
}
bool terminatePoint(){
    for(int i=0; i<5; ++i)
        if(nums[i])
        return true;
    
    return false;
}
int main(){
    
    
    while(input(),terminatePoint()){
        bool possible = false;
        sort(nums,nums+5);
        
        do{
            if(solve(nums[0],1)){
                possible = true; break;
            }
        }while(next_permutation(nums,nums+5));

        if(possible){  printf("Possible\n");}
        else printf("Impossible\n");
    }
   
    return 0;
}