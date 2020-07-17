#include<bits/stdc++.h>

using namespace std;

int main()
{

    int max,c,s,L=0,T;
    cin>>T;
    while(T--)
    {
        L++;
        max=0;
        cin>>c;
        while(c--)
        {
            cin>>s;
            if(max<s)
                max=s;

        }
        cout<<"Case "<<L<<":"<<" "<<max<<endl;


    }

}
