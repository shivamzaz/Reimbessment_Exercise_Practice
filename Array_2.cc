#include "bits/stdc++.h"
using namespace std;
int main(){
	vector<int>a,b;
	int i;
	for(i=0;i<4;i++){
		a.push_back(i);
		b.push_back(i);
	}
	i=0;
	while(1){
		a.push_back(b[i]);
		if(b[i+1]=='\0'){break;}
		i+=1;
	}
	//a.insert(a.end(),b.begin(),b.end());//insert into a
	//b.insert(b.end(), a.begin(), a.end());//insert into b
	vector<int>::const_iterator jj;
	for(jj=a.begin();jj<a.end();jj++){
		printf("%d\n",*jj);
	}
	return 0;
}