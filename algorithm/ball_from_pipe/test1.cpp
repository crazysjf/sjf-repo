/* 
 * Problem: NOI2009 ball
 * Author: Guo Jiabao
 * Time: 2009.9.28 12:39
 * State: Solved
 * Memo: 组合计数 递推
*/
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
using namespace std;
const int MAXN = 502,MOD=1024523;
 
int N,M,Ans;
char U[MAXN],L[MAXN];
int F[MAXN][MAXN][MAXN];
 
void init()
{
	freopen("ball.in","r",stdin);
	freopen("ball.out","w",stdout);
	scanf("%d%d",&N,&M);
	scanf("%s",U+1);
	scanf("%s",L+1);
	F[0][0][0] = 1;
}
 
inline void update(int &F,int &c)
{
	F += c;
	if (F >= MOD)
		F -= MOD;
}
 
void solve()
{
	int i,j,k,l;
	for (i=0;i<=N;i++)
	{
		for (j=0;j<=M;j++)
		{
			for (k=0;k<=N;k++)
			{
				int &t = F[i][j][k];
				if (!t) continue;
				l = i+j-k;
				if (U[i+1] == U[k+1])
					update(F[i+1][j][k+1],t);
				if (U[i+1] == L[l+1])
					update(F[i+1][j][k],t);
				if (L[j+1] == U[k+1])
					update(F[i][j+1][k+1],t);
				if (L[j+1] == L[l+1])
					update(F[i][j+1][k],t);
			}
		}
	}
	Ans = F[N][M][N];
}
 
int main()
{
	init();
	solve();
	printf("%d\n",Ans);
	return 0;
}
