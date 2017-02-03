<<<<<<< HEAD
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
=======
#include <stdio.h>

// Returns true if there is a subset of set[] with sun equal to given sum
bool  isSubsetSum( int  set[],  int  n,  int  sum)
{
   // Base Cases
    if  (sum == 0)
      return   true ;
    if  (n == 0 && sum != 0)
      return   false ;

   // If last element is greater than sum, then ignore it
    if(set[n1] > sum)
      return  isSubsetSum(set, n­1, sum);

   /* else, check if sum can be obtained by any of the following
      (a) including the last element
      (b) excluding the last element   */
    return  isSubsetSum(set, n­1, sum) || isSubsetSum(set, n­1, sum­set[n­1
}

// Driver program to test above function
int  main()
{
   int  set[] = {3, 34, 4, 12, 5, 2};
   int  sum = 9;
   int  n =  sizeof (set)/ sizeof (set[0]);
   if  (isSubsetSum(set, n, sum) ==  true )
      printf ("Found a subset with given sum");
   else
      printf ("No subset with given sum");
   return  0;
   }
>>>>>>> c44d4bbf2769624d6e7390db9c20edeed38d48f2
