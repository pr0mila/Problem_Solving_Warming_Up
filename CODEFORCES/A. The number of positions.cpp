#include <bits/stdc++.h>

using namespace std;

int maxx(int c,int d)
{

    if(c>d)
        return c;
    else
        return d;
}
int main()
{
    int n,a,b,p;
    cin>>n>>a>>b;
    p=n-maxx(a+1,n-b)+1;
    cout<<p<<endl;

}
