/*
* Problem: NOI2009 DAY2 ball
* Author: Guo Jiabao
* Time: 2009.7.29 10:34
* State: Done
* Memo: DFS
*/
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
 
using namespace std;
 
const int MAXN=501,MAXS=1<<24,MOD=1024523;
 
FILE *fi,*fo;
 
int P[2][MAXN],C[2];
int Cnt[MAXS],Ans;
 
void dfs(int i,int c0,int c1,int s)
{
	if (c0 == 0 && c1 == 0)
	{
		Cnt[s] ++;
		return;
	}
	if (c0 >= 1)
	{
		dfs(i+1,c0-1,c1,s + (P[0][c0] << (i-1)) );
	}
	if (c1 >= 1)
	{
		dfs(i+1,c0,c1-1,s + (P[1][c1] << (i-1)) );
	}
}
 
void solve()
{
	int i;
	long long t;
	dfs(1,C[0],C[1],0);
	for (i=0;i<MAXS;i++)
	{
		if (Cnt[i])
		{
			t = Cnt[i];
			t *= t;
			t %= MOD;
			Ans += t;
			if (Ans >= MOD)
				Ans -= MOD;
		}
	}
	fprintf(fo,"%d\n",Ans);
}
 
int main()
{
	int k,i,c;
	fi = fopen("ball.in","r");
	fo = fopen("ball.out","w");
	fscanf(fi,"%d%d",&C[0],&C[1]);
	for (k=0;k<=1;k++)
	{
		for (i=1;i<=C[k];i++)
		{
			do c=fgetc(fi); while (c==10 || c==13);
			P[k][i] = c-'A';
		}
	}
	solve();
	fclose(fi);
	fclose(fo);
	return 0;
}
