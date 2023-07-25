
///Find Fibonacci series upto n.

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll N=100;

ll dp[N];
int fibo(int n){
    if(n<=1){return dp[n]=n;}
    if(dp[n]>0) {return dp[n];}

    dp[n]=fibo(n-1)+ fibo(n-2);
    cout<<dp[n]<<" ";
    return dp[n];
}



void solve()
{
    ll n; cin>>n;

    cout<<0<<" "<<1<<" "; /// print base value

    ///int f=fibo(n); // this is recursive way.

    dp[1]=1;
    for(int i=2; i<=n; i++){
        dp[i]=dp[i-1]+dp[i-2];
        cout<<dp[i]<<" ";
    }
    cout<<endl;
    ///this is iterative way.

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

