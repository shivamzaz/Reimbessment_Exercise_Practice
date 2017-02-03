//header file for code
#include "bits/stdc++.h"
using namespace std;
int main(){
    //for size of memory buffer of char type
    char a[10000];
    int a1=5,b=5,c,u=5,p,i,f;
    float c1;
    cout<<"Enter your name : ";
    //input the bufer
    scanf("%[^\n]%*c", a);
    //scanf("%s",&(*a[i1++]));
    cout<<"Enter the starting number of adventurers : ";
    cin>>p;
    //flag assigning
    f=0;
    //loop iteration
    for(i=1;i<=3;i++){
    if(f==0){
        printf("You are %s leader of the space mission Olympus with %d team members on a mining expedition among the stars\n",a,p);//*a,*(a+1),p);
        f=1;
    }
    b=u*i;
    //find the percentage
    c1=ceil((p*20.00)/100);
    c=p-c1;
    printf("Although sacrificing %d members of the space mission you have found %d more dylithium crystals but have only %d team members left.\n",a1--,b,c);
    p=c;}
    return 0;
    }
