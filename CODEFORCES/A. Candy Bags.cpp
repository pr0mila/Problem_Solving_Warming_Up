#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n,p=1,q;
    cin>>n;
    q=n*n;
    for(int i=0;i<n;i++)
    {

        for(int j=0;j<n/2;j++)
        {
            cout<<p<<" ";
            p++;
        }
        for(int j=0;j<n/2;j++)
        {
            cout<<q<<" ";
            q--;
        }
        cout<<endl;

    }

}
