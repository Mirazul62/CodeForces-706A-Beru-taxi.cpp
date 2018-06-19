#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    double x,y,a,b,v,i,n, d,t,m;
    cin>>x>>y;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b>>v;
        d=sqrt((x-a)*(x-a)+(y-b)*(y-b));
        t=d/v;
        if(i==0)
            m=t;
        else
        {
            if(t<m)
                m=t;
            t=0;
        }
    }
    cout<<setprecision(18)<<m;

}
