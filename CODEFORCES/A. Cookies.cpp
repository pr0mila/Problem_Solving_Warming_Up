#include<bits/stdc++.h>

using namespace std;

int main()
{

    int ara[105],n,countt=0,sum=0;
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>ara[i];

    for(int i=0; i<n; i++)
    {
        sum+=ara[i];
        if(ara[i]%2==0)
            countt++;

    }
    if(sum%2==0)
        cout<<countt<<endl;
    else
        cout<<n-countt<<endl;





}
