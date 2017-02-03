// No need to think about any else just on one type and nothing 
#include "stdio.h"
int main(){
	//--------------------------------------single----------//
	char *p4[2]={"ram","shivamzaz"};
	//use as array for accessing as well
	printf("%s\n",p4[1]);//*(p4+1));
	//-----------------------------------------double----------//
	char *p[2][2]={{"ram","shivamzaz"},"shiva"};
	//printf("%s",*(p+1));
	printf("%s\n",*(*(p+0)+1));
	//--------------------------------nested---------------//
	char *df[10]={"as","fg"};
	//char **f=&(*(df+1));
	char **f=&(*(*(df+0)+1));
	printf("%s\n",*(f));
	printf("%s\n",*(f)+1);//*(df[1])+1);
	//---------------------------------------------------------//
	if(*(p4+1)==*(*(p+0)+1)){
		printf("hello pointer");
	}

	return 0;
}