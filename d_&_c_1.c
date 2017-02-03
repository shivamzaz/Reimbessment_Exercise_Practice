 #include "stdio.h"
int  div(int i){
  if(i==1){
    return 0;
  }
  else{
    //printf("hello");
    return (1+div(i/2));
  }
}
int fgh(int p){
    if(p==2){
        return 0;
    }
    else{
      return 1+fgh(p/2);
    }
}
int sd(int i,int n){
  int p=n;
  if(i==1){
    return p;
  }
  else if(i%2!=0 && i!=1){
  //  printf("hello11\n");
  //  p+=i;
    return p+sd(i/2,n*2) ;
  }
  else{
//    printf("hello22\n");
    return sd(i/2,n*2);
  }
}
int main(){
int i=10,n=2;
  //sd(i,n);
  printf("%d",fgh(i));//div(t));
  return 0;
}
