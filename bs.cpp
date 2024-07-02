
#include <bits/stdc++.h>
using namespace std;

#define int long long
// declare variable as global
int check(int mid){
    // write the logic of check function
}

signed main()
{
    // take input varialble
    
    int low=0 high=n-1, ans =-1; // take as 0 as defaul as situation
    while(low<=high)
    {
        int mid=low+high/2; // low+(high-low)/2 for int overflow
        if(check(mid)==1){
            ans=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return ans;
    

    return 0;
}