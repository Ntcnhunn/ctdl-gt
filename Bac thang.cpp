/* F[n]=F[n-1]+F[n-2]+...+F[n-k];
F[n]=F[n-1] roi buoc len 1 buoc;
F[n]=F[n-2] roi buoc len 2 buoc
...
F[n]=F[n-k] roi buoc len;
4 2
F[0]=1->F[3-3]=1;
F[1]=1 
F[2]=2;
F[3]=3;
F[4]=5*/
#include<bits/stdc++.h>
using namespace std;
int F[100005];
int n,k;
int mod=1e9+7;
int qhd(){
	memset(F,0,sizeof(F));
	F[0]=1, F[1]=1;
	for(int i=2; i<=n; i++){
		for(int j=1; j<=min(i,k); j++){
			F[i]+=F[i-j];
			F[i]%=mod;
		}
	}
	return F[n];
}

main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		cout<<qhd()<<endl;
	}
}
