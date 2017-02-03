#include "bits/stdc++.h"
using namespace std;
void create2(int temp[],int lhs,int rhs,int r,int a[],int tem_index){
	int i;
	if(tem_index==r){
		//tem_index not contain any value this time , only no. of elements
		for(i=0;i<r;i++){   // analyze only by their lenght, not wrt to given array
			printf("%d ",a[temp[i]]) ;
		}
		printf("\n");
		return;
	}
	for(i=lhs;i<=rhs;i++){
		//tem_index actually see as a total length currently push via array into associate index
		temp[tem_index]=i;
		//printf("tt => %d\n",temp[tem_index] );
		create2(temp,i+1,rhs,r,a,tem_index+1);
	}
	return;
}
void create(int a[],int n,int r){
	int temp[r+1];
	create2(temp,0,n-1,r,a,0);
}
int main(int argc, char const *argv[]){
	int a[]={1,2,3,4};
	int n=4;
	int r=3;
	create(a,n,r);
	return 0; 

}