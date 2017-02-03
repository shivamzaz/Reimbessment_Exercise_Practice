#incllude "bits/stdc++.h"
"ram is good boy"
using namespace std;
int print_till(){
	for(j=i;j<temp[i];j++){
		printf("%c",str[j]);
	}
	printf(" ");
}
int checkup(char temp2[],int len){
	while(temp[i]!='\0'){
		if(temp[i+k+1]!=' '){
			i=i+1;
		}
		print_till(temp2[],i)
	}
}
int* finding_space(char str[]){
	int p,k,temp[100];
	p=strlen(str);
	for(i=0;i<p;i++){
		if(str[i]==' '){
			temp[k++]=i;
		}
	}
	return temp;
}
int main(int argc, char const *argv[])
{
	char str[100],temp2[100];
	gets(str);
	len=strlen(str);
	temp2=finding_space(str);
	checkup(temp2,len);
	return 0;
}