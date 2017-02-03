#include "bits/stdc++.h"
using namespace std;
int max(int a, int b){
	if(a>b){return a;}else{return b;}
}
int sd(long int a[],int n){
	int p=a[0],q=a[0],i;
	for(i=1;i<n;i++){
		p=max(a[i],p+a[i]);
		q=max(p,q);
	}
	return q;
}
int main(){
	long int a[100000],i,q,n,t;
	scanf("%ld",&t);
	while(t--){
		long int p=0,d=0;
		scanf("%ld",&n);
		for(i=0;i<n;i++){
			scanf("%ld",&a[i]);
		}
		q=sd(a,n);
		for(i=0;i<n;i++){
			if(a[i]>=0){d+=a[i];}
		}
		long int max=a[0],f=0;
		if(d==0){
		for(i=1;i<n;i++){
				if(a[i]>max){
					max=a[i];
				}
			}
			f=1;
		}
		if(f==0){
			 printf("%ld %ld\n",q,d);
		}
		else{
			 printf("%ld %ld\n",q,max);
		}
		
	}
	return 0;
}