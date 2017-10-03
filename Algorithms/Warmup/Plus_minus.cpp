//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,p=0,n=0,z=0,ar[105];
    double ps=0,ng=0,zr=0;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>ar[i];
    }
    for(int i=0;i<N;i++)
    {
        if(ar[i]<0)
        {
            n++;
        }
         else if(ar[i]>0)
        {
            p++;
        }
         else if(ar[i]==0)
         {
             z++;
         }
    }
    //cout<<p<<" "<<n<<" "<<z<<endl;
    ps=p/(N*1.0);
    ng=n/(N*1.0);
    zr=z/(N*1.0);
    printf("%.6lf\n",ps);
    printf("%.6lf\n",ng);
    printf("%.6lf\n",zr);

    return 0;
}
