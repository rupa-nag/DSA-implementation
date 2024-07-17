#include<iostream>
using namespace std;
#define size 3
int q[size];
int f=-1;
int r=-1;
void enqueue(){
int x;
cout<<"Enter data"<<endl;
cin>>x;
if(r == size-1)
cout<<"overflow"<<endl;
else if(f == -1 && r == -1){
f=r=0;
q[r]=x;
}
else
{
r++;
q[r]=x;
}
}
void dequeue(){
if(f == -1 && r == -1)
cout<<"underflow"<<endl;
else if(f == r){
f=r=-1;
}
else
{
f++;
}
}
void display(){
int i;
if(f == -1 && r == -1)
cout<<"underflow"<<endl;
for(i=f;i<r+1;i++){
cout<<q[i]<<" ";
}
}
int main()
{
int ch;
do{
cout<<"1.enqueue \n 2.dequeue \n3.display\n 4.exit\n"<<endl;
cout<<"Enter your choice:"<<endl;
cin>>ch;
switch(ch){
case 1:enqueue();
break;
case 2:dequeue();
break;
case 3:display();
break;
case 4:exit(1);
break;
default:
cout<<"invalid";
}
}
while(ch!=5);
return 0;
}
