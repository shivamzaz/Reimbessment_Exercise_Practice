#include "stdio.h"
int main(){
	//int t;
	long long int i,a[100000],t;
	scanf("%lld",&t);
	for(i=0;i<t;i++){
	scanf("%lld",&a[i]);}
	for(i=1;i<t;i++){
		if(a[i]==0){
			a[i-1]=0;
		}
	}
	for(i=0;i<t;i++){
		if(a[i]!=0){
			printf("%lld\n",a[i]);
		}
	}
	return 0;
}
