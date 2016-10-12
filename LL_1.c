#include "stdio.h"
#include "malloc.h"
struct node{
	int data;
	struct node *next;
};
struct node* new_n(int );
struct node* insert(struct node** head,int d){
	struct node* new_fi=(struct node*) malloc(sizeof(struct node));
	new_fi->data=d;
	struct node* tt=*head;
	if(*head==NULL){
		//new_fi->data=d;
		new_fi->next=NULL;
		*head=new_fi;
	}
	
	else{
		while(tt->next!=NULL){
		tt=tt->next;
		}
		tt->next=new_fi;
		new_fi->next=NULL;
		return tt;
	}
}
struct node* specific_insert(struct node** head,int k,int d){
	struct node* last=*head;
	struct node* pre=*head;
	int cnt=1;
	while(cnt!=k){
		pre=last;
		last=last->next;
		cnt++;
	}
	struct node *p=new_n(d);
	pre->next=p;
	p->next=last;
}
struct node* new_n(int d){
	struct node* new_fi=(struct node*)malloc(sizeof(struct node));
	new_fi->data=d;
	new_fi->next=NULL;
	return new_fi;
}
void print(struct node** head){
	struct node* p=*head;
	while(1){
		printf("%d\n",p->data);
		if(p->next==NULL){break;}
		p=p->next;
	}
}
struct node* delete(struct node**head,int k){
	struct node* last=*head;
	struct node* pre=*head;
	int cnt=1;
	// don't forget to this concept
	while(cnt!=k){
		pre=last;
		last=last->next;
		cnt++;
	}
	pre->next=last->next;
	free(last);
}
int main(){
	//int 
	struct node* head =NULL;
	//h=new_n(5);
	insert(&head,5);
	insert(&head,6);
	insert(&head,7);
	specific_insert(&head,2,3);
	print(&head);
	printf("--------------\n");
	delete(&head,2);
	print(&head);
	//struct node* p;
	//p=new_n(6);
	//p->next=h;
	//insert()
	return 0;
	
}