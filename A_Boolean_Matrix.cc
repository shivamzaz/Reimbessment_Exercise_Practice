#include "bits/stdc++.h"
using namespace std;
int t,t1,a[10000][10000],row[10000],col[10000];
//int det;
void input(){
	int i,j;
	scanf("%d %d",&t,&t1);
	for(i=0;i<t;i++){
		for(j=0;j<t1;j++){
			scanf("%d",&a[i][j]);
		}
	}
}
struct rc1
{
	int k,k1;
	
};
struct rc1 rc;
struct rc1 detect(int a[][10000],int t,int t1){
	rc.k=0,rc.k1=0;
	int i,j;
	for(i=0;i<t;i++){
		for(j=0;j<t1;j++){
			if(a[i][j]==1){
				row[rc.k++]=i;
				col[rc.k1++]=j;
			}
		}
	}
	return rc;
}
void print(int a[][10000]){
	int i,j;
	printf("----------\n");
	for(i=0;i<t;i++){
		for(j=0;j<t1;j++){
			printf("%d ",a[i][j]);
		}
	printf("\n");
	}
}
int main(int argc, char const *argv[])
{	
	input();
	int k=0,k1=0,i,j;
	struct rc1 det;
	det=detect(a,t,t1);
	// printf("det is %d %d\n",row[2],col[2]);
	// for(i=row[k];k<det.k;k++){
	// 	for(j=0;j<t1;j++){
	// 		a[i][j]=1;
	// 	}
	// }
	while(1){
		for(i=0;i<t1;i++){
			a[row[k]][i]=1;
			//printf("df %d %d\n",row[k],j);
		}
		if(k>=det.k-1){break;}
		k++;
	}
	while(1){
		for(i=0;i<t;i++){
			a[i][col[k1]]=1;
			// printf("df %d %d\n",i,col[k1]);
		}
		if(k1>=det.k1-1){break;}
		k1++;
	}
	// for(i=col[k1];k1<=det.k1;k1++){
	// 	for(j=0;j<t;j++){
	// 		a[j][i]=1;

	// 	}
	// }
	print(a);
	return 0;
}