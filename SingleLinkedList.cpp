#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
int data;
struct node *next;
};
struct node *head= NULL,*node,*temp;
void create(){
node=(struct node*)malloc(sizeof(struct node));
cout<<"Enter data"<<endl;
cin>>node->data;
if(head==NULL)
{
head=temp=node;
}
else{
temp->next=node;
temp=node;
}
}
void int_at_beg(){
node=(struct node*)malloc(sizeof(struct node));
cout<<"Enter data"<<endl;
cin>>node->data;
temp=head;
node->next=temp->next;
head=node;
}
void int_at_end(){
node=(struct node*)malloc(sizeof(struct node));
cout<<"Enter data"<<endl;
cin>>node->data;
temp=head;
while(temp->next!=NULL){
temp=temp->next;
temp->next=node;
}
}
void int_at_pos(){
int i=1,pos;
struct node*prev;
node=(struct node*)malloc(sizeof(struct node));
cout<<"Enter data"<<endl;
cin>>node->data;
temp=head;
cout<<"Enter position:"<<endl;
cin>>pos;
while(i<(pos-1)){
temp=temp->next;
i++;
}
prev=temp->next;
temp->next=node;
temp=node;
node->next=prev;
}
void display(){
temp=head;
while(temp->next!=NULL){
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
