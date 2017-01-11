#include "bits/stdc++.h"
using namespace std;
int k=35;
void tempate(){
	for(int i=0;i<35;i++){
		printf("%d ",i+1);
	}
	printf("\n");
}
int print(int l[35]){
	for(int i=0;i<35;i++){
		printf("%d ",*(l+i));
	}
	printf("\n");
}
bool process(int t[],int n,int g){
	int *temp=new int[36];
	temp[0]=true;
	int i,j;
	for(i=1;i<35;i++){temp[i]=false;}
	for(i=0;i<=5;i++){
		for(j=t[i];j<35;j++){
			//anytime once u get true, true willbe in ans.
			temp[j]=temp[j]||temp[j-t[i]];
		}
		print(temp);
	}
	return temp[g];
}
int logic_checkup(){
	bool p=true,r=false;
	cout<< r||p;
}
#define printou(p) printf("%s\n",p)
int main(){
	int t[]={8,4,6};
	int n=5;
	// tempate();
	// int* l=process(t,n);
	// print(l);
	int g;
	scanf("%d",&g);
	printf("you typed %d\n",g );
	process(t,n,g)==1 ? printou("possible"):printou("not possible");
	// logic_checkup();
	return 0;
}