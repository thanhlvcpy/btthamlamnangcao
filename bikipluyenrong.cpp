#include <bits/stdc++.h>

using namespace std;
struct sucmanhcuarong
{
    int sucrong,diem;
};
sucmanhcuarong sucmanh[10000];
bool cmp(sucmanhcuarong a,sucmanhcuarong b)
{
    if(a.sucrong<b.sucrong)
        return true;
    else return false;
}

int main()
{
    //freopen("socola.inp","r",stdin);
    //freopen("socola.out","w",stdout);
    int n,s;
    cin>>s>>n;
    //N:số con rồng,S:sức mạnh của chàng trai ban đầu!!!
    for(int i=1;i<=n;i++)
		cin>>sucmanh[i].sucrong>>sucmanh[i].diem;
	sort(sucmanh+1,sucmanh+n+1,cmp);
	int kt=true;
	for(int i=1;i<=n;i++)
	{
		if(s>sucmanh[i].sucrong)
			s=s+sucmanh[i].diem;
		else
		{
			kt=false;
			break;
		}
	}
	if(kt==true)
		cout<<"YES";
	else
		cout<<"NO";
    return 0;
}