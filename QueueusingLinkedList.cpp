#include<iostream>
#include<stdlib.h>
using namespace std;
struct queue{
int data;
struct queue *next;
};
struct queue *front= NULL,*rear=NULL,*node,*temp;
void enqueue(){
node=(struct queue*)malloc(sizeof(struct queue));
cout<<"Enter data"<<endl;
cin>>node->data;
if(front==NULL && rear==NULL){
front=rear=node;
}
else{
rear->next=node;
rear=node;
}
}
void dequeue(){
if(front==NULL){
cout<<"queue is empty"<<endl;
}
else{
front=front->next;
}
}
void display(){
temp=front;
if(front==NULL){
cout<<"queue is empty"<<endl;
}
else{
while(temp!=rear){
cout<<temp->data<<" ";
temp=temp->next;
}
cout<<temp->data<<" ";
}
}
int main(){
int ch;
do{
cout<<"1.enqueue\n2.dequeue\n3.display\n4.exit"<<endl;
cout<<"Enter choice"<<endl;
cin>>ch;
switch(ch){
case 1:enqueue();
break;
case 2:dequeue();
break;
case 3:display();
break;
case 4:exit(0);
break;
default:cout<<"Invalid";
}
}
while(ch!=5);
return 0;
}
C
