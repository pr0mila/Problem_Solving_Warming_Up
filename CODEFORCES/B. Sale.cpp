#include <bits/stdc++.h>

using namespace std;

int main()
{

    int m,n,x,sum=0;
    cin>>m>>n;
    vector<int>tv;
    for(int i=0;i<m;i++)
    {
        cin>>x;
        tv.push_back(x);
    }
    sort(tv.begin(),tv.end());
    for(int i=0;i<n;i++)
    {

        if(tv[i]<0)
            sum-=tv[i];
    }
    cout<<sum<<endl;




}
