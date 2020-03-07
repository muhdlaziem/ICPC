#include <bits/stdc++.h>
using namespace std;

int main(){
    double r,x1,y1,x2,y2;
    scanf("%lf%lf%lf%lf%lf",&r,&x1,&y1,&x2, &y2);
    printf("%d\n", (int)ceil(sqrt(pow(x1-x2,2)+pow(y1-y2,2))/(2*r)));

    return 0;
}