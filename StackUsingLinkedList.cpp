#include<iostream>
#include<stdlib.h>
using namespace std;
struct stack{
int data;
struct stack *next;
};
struct stack *top= NULL,*node,*temp;
void push(){
node=(struct stack*)malloc(sizeof(struct stack));
cout<<"Enter data"<<endl;
cin>>node->data;
node->next=top;
top=node;
}
void pop(){
if(top==NULL){
cout<<"stack is empty"<<endl;
}
else{
temp=top;
top=top->next;
}
}
void display(){
temp=top;
if(top==NULL){
cout<<"stack is empty"<<endl;
}
else{
while(temp!=NULL){
cout<<temp->data<<" ";
temp=temp->next;
}
}
}
int main(){
int ch;
do{
cout<<"1.push\n2.pop\n3.display\n4.exit"<<endl;
cout<<"Enter choice"<<endl;
cin>>ch;
switch(ch){
case 1:push();
break;
case 2:pop();
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
