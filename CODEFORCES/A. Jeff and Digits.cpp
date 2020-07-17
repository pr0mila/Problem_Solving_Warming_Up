#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n,ara[10001],f=0,z=0,r=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
         cin>>ara[i];
         if(ara[i]==5)
         {
            f++;
         }

        else if(ara[i]==0)
        {
             z++;
        }

    }

    if(z==0)
        cout<<"-1";
    else if(f<9)
        cout<<"0";
    else if(f>=9)
    {

        r=(f/9)*9;
        for(int i=0;i<r;i++)
            cout<<"5";
         for(int i=0;i<z;i++)
            cout<<"0";
    }
    cout<<endl;

}
