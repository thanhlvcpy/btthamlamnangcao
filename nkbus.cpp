#include <bits/stdc++.h>

using namespace std;
//NKBUS,,,Don xe buyt
int main()
{
    int n,m;
    cin>>n>>m;
    int d=0,timewasted[200001],tongthoigian=0;
    for(int i=1;i<=n;i++)
    {
       int t,k,nhanvien;
       cin>>t>>k;
       for(int i=1;i<=k;i++)
       {
           cin>>nhanvien;
           d++;
           timewasted[d]=nhanvien-tongthoigian;
           if(timewasted[d]<0)
           		timewasted[d]=0;
       }
       tongthoigian=tongthoigian+t;

    }
    sort(timewasted+1,timewasted+d+1);
    cout<<tongthoigian+timewasted[m];
    return 0;
}
