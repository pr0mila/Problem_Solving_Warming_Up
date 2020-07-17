#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t,a,b,c,d=0,x,y,z;
    cin>>t;
    while(t--)
    {

        d++;
        cin>>a>>b>>c;
        x=min(min(a,b),c);
        y=max(max(a,b),c);
        cout<<"Case "<<d<<":"<<" ";
        if(a!=x&&a!=y)
            cout<<a<<endl;
        else if(b!=x&&b!=y)
            cout<<b<<endl;
        else if(c!=x&&c!=y)
            cout<<c<<endl;

   }

}
