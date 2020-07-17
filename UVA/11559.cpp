#include <bits/stdc++.h>

using namespace std;
int main(){
    int N,B,H,W,p,total,need,w,ans;

    while(scanf("%d %d %d %d",&N,&B,&H,&W) == 4){
        total=B+1;
        for(int i=0;i<H;i++)
        {

            cin>>p;
            need=0;

             for(int j = 0;j < W;++j){
                cin>>w;
                need = max(need,w);
            }
            if(need >= N) total = min(total,N * p);
        }
        if(total == B+1)
            cout<<"stay home"<<endl;
        else
            cout<<total<<endl;
    }

    return 0;
}
