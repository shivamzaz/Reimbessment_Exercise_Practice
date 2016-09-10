#include "stdio.h"
#include "string.h"
int main(){
    char str[55]="this is a string for testing";
    char *p;
    p=strchr(str,'i');
    printf("%d %d",p,str);
    return 0;
}
