
///Find number of ways to reach 1. each steps can defined as:
/// 1. subtract 1 : n-=1;
/// 2. divide by 2 : n/=2 if n%2==0;
/// 3. divide by 3 : n/=3 if n%3==0;


#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll N=200005;

ll dp[N];
ll numberOFways(ll n){
    if(n==1)return dp[n]=0;
    if(n==2)return dp[n]=2;
    if(n==3)return dp[n]=3;
    if(dp[n]!=-1)return dp[n];

    dp[n]= numberOFways(n-1);
    if(n%2==0){
        dp[n]+=numberOFways(n/2);
    }
    if(n%3==0){
        dp[n]+=numberOFways(n/3);
    }
    return dp[n];

}



void solve()
{
    ll n; cin>>n;
    memset(dp, -1, sizeof dp);

    cout<<numberOFways(n)<<endl;  /// recursive way
    memset(dp, 0, sizeof dp);
    dp[1]=0;
    dp[2]=2;
    dp[3]=3;
    for(int i=4; i<=n ; i++){
        dp[i]+=dp[i-1];
        if(i%2==0)dp[i]+=dp[i/2];
        if(i%3==0)dp[i]+=dp[i/3];
    }
    cout<<dp[n]<<endl; /// iterative way

}

int main()
{
    ll t=1;
    cin>>t;
    for(ll i=1; i<=t; i++)
    {
        //cout<<"Case "<<i<<":"<<endl;
        solve();
    }
    return 0;
}

