#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>

//extern "C"{void *__dso_handle=0;}
using namespace std;
const int MAXN=250000+5;
long long dp[MAXN];
int main(int argc, char *argv[]) {
	int n,m;
		cin >> n >> m;
	dp[0]=dp[1]=1;
	for(int i=2;i<=250000;i++)
		dp[i]=i*dp[i-1]%m;
	long long ans=0;
	for(int i=1;i<=n;i++)
		ans=(ans+((n-i+1)*dp[i])%m*dp[n-i+1]%m)%m;
	cout << ans;
}
