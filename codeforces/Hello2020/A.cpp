#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>

//extern "C" {void *__dso_handle=0;}
using namespace std;

string a[25],b[25];
int gcd(int a,int b)
{
	return b==0 ? a : gcd(b,a%b);
}
int lcm(int a,int b)
{
	return a*b/gcd(a,b);
}

int main(int argc, char *argv[]) {
	int n,m;
	cin >> n >> m;
	for(int i=0;i<n;i++)
		cin >> a[i];
	for(int j=0;j<m;j++)
		cin >> b[j];
	int tt=lcm(n,m);
	int q;
	cin >> q;
	while (q--) {
		int y;
		cin >> y;	
		y%=tt;
		int a1=y%n;
		if(a1==0)
			a1=n-1;
		else a1--;
		int b1=y%m;
		if(b1==0)
			b1=m-1;
		else b1--;
		cout << a[a1] << b[b1] << endl;
	}
}