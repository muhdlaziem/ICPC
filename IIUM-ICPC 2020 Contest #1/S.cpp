#include <bits/stdc++.h>
#define ll long long
using namespace std;

// bool isSuperLucky(ll x){
//     ll temp = x;

//     ll cnt4=0LL, cnt7=0LL;
//     while(temp){
//         if(temp%10LL!=4LL && temp%10LL!=7LL)
//             return false;
        
//         if(temp%10LL==4LL)
//             cnt4++;
//         else if(temp%10LL==7LL) cnt7++;

//         temp = temp/10LL;
//     }
//     // cout<<cnt4<<" "<<cnt7<<endl;
//     if(cnt4==cnt7) return true;
//     else return false;
// }
int main(){
    ll n;
    cin >> n;
    ll mat[350] = {47,
                    74,
                    4477,
                    4747,
                    4774,
                    7447,
                    7474,
                    7744,
                    444777,
                    447477,
                    447747,
                    447774,
                    474477,
                    474747,
                    474774,
                    477447,
                    477474,
                    477744,
                    744477,
                    744747,
                    744774,
                    747447,
                    747474,
                    747744,
                    774447,
                    774474,
                    774744,
                    777444,
                    44447777,
                    44474777,
                    44477477,
                    44477747,
                    44477774,
                    44744777,
                    44747477,
                    44747747,
                    44747774,
                    44774477,
                    44774747,
                    44774774,
                    44777447,
                    44777474,
                    44777744,
                    47444777,
                    47447477,
                    47447747,
                    47447774,
                    47474477,
                    47474747,
                    47474774,
                    47477447,
                    47477474,
                    47477744,
                    47744477,
                    47744747,
                    47744774,
                    47747447,
                    47747474,
                    47747744,
                    47774447,
                    47774474,
                    47774744,
                    47777444,
                    74444777,
                    74447477,
                    74447747,
                    74447774,
                    74474477,
                    74474747,
                    74474774,
                    74477447,
                    74477474,
                    74477744,
                    74744477,
                    74744747,
                    74744774,
                    74747447,
                    74747474,
                    74747744,
                    74774447,
                    74774474,
                    74774744,
                    74777444,
                    77444477,
                    77444747,
                    77444774,
                    77447447,
                    77447474,
                    77447744,
                    77474447,
                    77474474,
                    77474744,
                    77477444,
                    77744447,
                    77744474,
                    77744744,
                    77747444,
                    77774444,
                    4444477777,
                    4444747777,
                    4444774777,
                    4444777477,
                    4444777747,
                    4444777774,
                    4447447777,
                    4447474777,
                    4447477477,
                    4447477747,
                    4447477774,
                    4447744777,
                    4447747477,
                    4447747747,
                    4447747774,
                    4447774477,
                    4447774747,
                    4447774774,
                    4447777447,
                    4447777474,
                    4447777744,
                    4474447777,
                    4474474777,
                    4474477477,
                    4474477747,
                    4474477774,
                    4474744777,
                    4474747477,
                    4474747747,
                    4474747774,
                    4474774477,
                    4474774747,
                    4474774774,
                    4474777447,
                    4474777474,
                    4474777744,
                    4477444777,
                    4477447477,
                    4477447747,
                    4477447774,
                    4477474477,
                    4477474747,
                    4477474774,
                    4477477447,
                    4477477474,
                    4477477744,
                    4477744477,
                    4477744747,
                    4477744774,
                    4477747447,
                    4477747474,
                    4477747744,
                    4477774447,
                    4477774474,
                    4477774744,
                    4477777444,
                    4744447777,
                    4744474777,
                    4744477477,
                    4744477747,
                    4744477774,
                    4744744777,
                    4744747477,
                    4744747747,
                    4744747774,
                    4744774477,
                    4744774747,
                    4744774774,
                    4744777447,
                    4744777474,
                    4744777744,
                    4747444777,
                    4747447477,
                    4747447747,
                    4747447774,
                    4747474477,
                    4747474747,
                    4747474774,
                    4747477447,
                    4747477474,
                    4747477744,
                    4747744477,
                    4747744747,
                    4747744774,
                    4747747447,
                    4747747474,
                    4747747744,
                    4747774447,
                    4747774474,
                    4747774744,
                    4747777444,
                    4774444777,
                    4774447477,
                    4774447747,
                    4774447774,
                    4774474477,
                    4774474747,
                    4774474774,
                    4774477447,
                    4774477474,
                    4774477744,
                    4774744477,
                    4774744747,
                    4774744774,
                    4774747447,
                    4774747474,
                    4774747744,
                    4774774447,
                    4774774474,
                    4774774744,
                    4774777444,
                    4777444477,
                    4777444747,
                    4777444774,
                    4777447447,
                    4777447474,
                    4777447744,
                    4777474447,
                    4777474474,
                    4777474744,
                    4777477444,
                    4777744447,
                    4777744474,
                    4777744744,
                    4777747444,
                    4777774444,
                    7444447777,
                    7444474777,
                    7444477477,
                    7444477747,
                    7444477774,
                    7444744777,
                    7444747477,
                    7444747747,
                    7444747774,
                    7444774477,
                    7444774747,
                    7444774774,
                    7444777447,
                    7444777474,
                    7444777744,
                    7447444777,
                    7447447477,
                    7447447747,
                    7447447774,
                    7447474477,
                    7447474747,
                    7447474774,
                    7447477447,
                    7447477474,
                    7447477744,
                    7447744477,
                    7447744747,
                    7447744774,
                    7447747447,
                    7447747474,
                    7447747744,
                    7447774447,
                    7447774474,
                    7447774744,
                    7447777444,
                    7474444777,
                    7474447477,
                    7474447747,
                    7474447774,
                    7474474477,
                    7474474747,
                    7474474774,
                    7474477447,
                    7474477474,
                    7474477744,
                    7474744477,
                    7474744747,
                    7474744774,
                    7474747447,
                    7474747474,
                    7474747744,
                    7474774447,
                    7474774474,
                    7474774744,
                    7474777444,
                    7477444477,
                    7477444747,
                    7477444774,
                    7477447447,
                    7477447474,
                    7477447744,
                    7477474447,
                    7477474474,
                    7477474744,
                    7477477444,
                    7477744447,
                    7477744474,
                    7477744744,
                    7477747444,
                    7477774444,
                    7744444777,
                    7744447477,
                    7744447747,
                    7744447774,
                    7744474477,
                    7744474747,
                    7744474774,
                    7744477447,
                    7744477474,
                    7744477744,
                    7744744477,
                    7744744747,
                    7744744774,
                    7744747447,
                    7744747474,
                    7744747744,
                    7744774447,
                    7744774474,
                    7744774744,
                    7744777444,
                    7747444477,
                    7747444747,
                    7747444774,
                    7747447447,
                    7747447474,
                    7747447744,
                    7747474447,
                    7747474474,
                    7747474744,
                    7747477444,
                    7747744447,
                    7747744474,
                    7747744744,
                    7747747444,
                    7747774444,
                    7774444477,
                    7774444747,
                    7774444774,
                    7774447447,
                    7774447474,
                    7774447744,
                    7774474447,
                    7774474474,
                    7774474744,
                    7774477444,
                    7774744447,
                    7774744474,
                    7774744744,
                    7774747444,
                    7774774444,
                    7777444447,
                    7777444474,
                    7777444744,
                    7777447444,
                    7777474444,
                    7777744444};
    for(ll i = 0; i< 350; ++i){

        if(mat[i]>=n){
           cout<<mat[i]<<endl;
            return 0;
        }
    }


    return 0;
}