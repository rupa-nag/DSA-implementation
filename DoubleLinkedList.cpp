#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
int data;
struct node *prev;
struct node *next;
};
struct node *head= NULL,*node,*temp;
void create(){
node=(struct node*)malloc(sizeof(struct node));
cout<<"Enter data"<<endl;
cin>>node->data;
node->prev=NULL;
node->next=NULL;
if(head==NULL)
{
head=temp=node;
}
else{
temp->next=node;
node->prev=temp;
temp=node;
}
}
void int_at_beg(){
node=(struct node*)malloc(sizeof(struct node));
cout<<"Enter data"<<endl;
cin>>node->data;
node->prev=NULL;
node->next=NULL;
head->prev=node;
node->next=head;
head=node;
}
void int_at_end(){
temp=head;
node=(struct node*)malloc(sizeof(struct node));
cout<<"Enter data"<<endl;
cin>>node->data;
node->prev=NULL;
node->next=NULL;
while(temp->next!=NULL){
temp=temp->next;
}
temp->next=node;
node->prev=temp;
}
void int_at_pos(){
int i=1,pos;
struct node*prev;
cout<<"Enter position:"<<endl;
cin>>pos;
if(pos==1){
int_at_beg();
}
else{
node=(struct node*)malloc(sizeof(struct node));
cout<<"Enter data"<<endl;
cin>>node->data;
temp=head;
while(i<(pos-1)){
temp=temp->next;
i++;
}
node->prev=temp;
node->next=temp->next;
temp->next=node;
temp->next->prev=node;
}
}
void display(){
temp=head;
while(temp!=NULL){
cout<<temp->data<<" ";
temp=temp->next;
}
}
int main(){
int ch;
do{
cout<<"1.ifb\n2.ife\n3.ifp\n4.display\n5.create\n6.exit"<<endl;
cout<<"Enter choice"<<endl;
cin>>ch;
switch(ch){
case 1:int_at_beg();
break;
case 2:int_at_end();
break;
case 3:int_at_pos();
break;
case 4:display();
break;
case 5:create();
break;
case 6:exit(0);
break;
default:cout<<"Invalid";
}
}
while(ch!=6);
return 0;
}
