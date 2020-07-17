#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n,x,y,z;
    float v;
    cin>>n>>x>>y;
    v=int((n*y)/100);
    if(v>x)
    {
        z=max(0,v-x);
        cout<<v<<endl;
    }
    else
    {
         cout<<"0"<<endl;
    }


}
