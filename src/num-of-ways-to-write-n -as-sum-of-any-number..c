
///Find number of ways to write n as a sum of any  number (1 to n).
/// print ans modulo 10^9+7

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll N=200005, mod=1e9+7;

ll way[N];
ll numberOFways(ll n){
   if(n==0) return way[n]=1;

   if(way[n]!=-1) return way[n];

   ll ans=0;
   for(ll i=1; i<=n; i++){
    ans+=numberOFways(n-i);
   }

   return way[n]=ans;

}


void solve()
{
    ll n; cin>>n;
    memset(way, -1, sizeof way);
    cout<<numberOFways(n)<<endl;  /// recursive way
    memset(way, 0, sizeof way);


//    for(int i=4; i<=n; i++){
//
//    }
//    cout<<way[n]<<endl; /// iterative way

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



