#include "bits/stdc++.h"
using namespace std;
int main(){
	int a[]={3,2,3};
	int b[]={4,3,5},p1,p2;
	p1=sizeof(a)/sizeof(a[0]);
	p2=sizeof(b)/sizeof(b[0]);
	int x=p1+p2;
	int i;
	int a3[x];
	for(i=0;i<p1;i++){
		a3[i]=a[i];
	}
	for(i=0;i<p2;i++){
		a3[p1+i]=b[i];
	}
	sort(a3,a3+x);
	for(i=0;i<x;i++){
		printf("%d\n",a3[i]);
	}
	return 0;
}