
///Find minimum number of steps to reach 1. each steps can defined as:
/// 1. subtract 1 : n-=1;
/// 2. divide by 2 : n/=2 if n%2==0;
/// 3. divide by 3 : n/=3 if n%3==0;


#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll N=200005;

ll dp[N];
ll mini_step(ll n){

    if(n<2)return dp[n]=0;
    if(n<4) return dp[n]=1;   // n[1] must equal to zero.
    if(dp[n]!=-1)return dp[n];

    dp[n]= mini_step(n-1)+1;
    if(n%2==0){
        dp[n]=min(dp[n], mini_step(n/2)+1);
    }
    if(n%3==0){
        dp[n]=min(dp[n], mini_step(n/3)+1);
    }
    return dp[n];

}

void solve()
{
    ll n; cin>>n;
//    memset(dp, -1, sizeof(dp));
//    cout<<mini_step(n)<<endl; ///recursive way
    memset(dp, 0, sizeof(dp));
    dp[1]=0;
    for(int i=2; i<=n; i++){
        dp[i]=dp[i-1]+1;

        if(i%2==0){
            dp[i]=min(dp[i], dp[i/2]+1);
        }
        if(i%3==0){
            dp[i]=min(dp[i], dp[i/3]+1);
        }

    }
    cout<<dp[n]<<endl;

    /// iterative way.

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    for(ll i=1; i<=t; i++)
    {
        //cout<<"Case "<<i<<":"<<endl;
        solve();
    }
    return 0;
}

