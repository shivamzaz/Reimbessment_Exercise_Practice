#include "bits/stdc++.h"
using namespace std;
int function(int t[],int in,int a[],int r,int st,int end){
	int i;
	if(in==r){
		for(i=in-r;i<r;i++){
			printf("%d",a[t[i]]);
		}
		printf("\n");
	}
	for(i=0;i<=end;i++){
		t[in]=st;
		function(t,in+1,a,r,i+1,end);
	}
}
int main(){
	// int t;
	int a[]={1,2,3};
	int r=2;int t[1234],in=0,st=0,end=2;
	function(t,in,a,r,st,end);
	return 0;
}