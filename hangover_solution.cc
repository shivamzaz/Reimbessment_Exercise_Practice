
//  Hangover
//
//  Created by shivamzaz on 4/30/16.
//  Copyright (c) 2014 shivamzaz. All rights reserved.
//
//Give approximate answer of hangover_problem
// Used formula is 0.58+ln(n)+1/(2*n)+(1/12*n*n)-1
#include "bits/stdc++.h"
using namespace std;
double gh(int jk){
    return log(jk)/log(2.718281828459045235);
}
int main(){
    float m=0.58,inp;
    scanf("%f",&inp);
    while(inp!=0.00){
          long long int i=1;
          //scanf("%f",&s);
      while(i>=0){
            double e=(1/(2*i))-(1/(12*i*i));
            double p=m+gh(i)+e;
           // p = roundf(p * 100) / 100;
            p-=1;
            //printf("%lld %g\n",i,p);
            /*if((inp-p)<=0.09){
             printf("%lld\n",i);
              break;
           }*/
           if(p>=inp){//} || (inp-p)<=0.09){
           printf("%lld\n",i-1);
              break;
           }
            else{
              i++;
            }
          }
      scanf("%f",&inp);
    }
    return 0;
}
