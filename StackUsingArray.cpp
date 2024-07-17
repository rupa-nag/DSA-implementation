#include<iostream>
using namespace std;
#define size 3
int s[size];
int t=-1;
void push(){
int x;
cout<<"Enter data"<<endl;
cin>>x;
if(t == size-1)
cout<<"overflow"<<endl;
else
{
t++;
s[t]=x;
}
}
void pop(){
if(t == -1)
cout<<"underflow"<<endl;
else
{
t--;
}
}
void display(){
int i;
for(i=t;i>=0;i--){
cout<<s[i]<<" ";
}
}
int main()
{
int ch;
do{
cout<<"1.push \n 2.pop \n3.display\n 4.exit\n"<<endl;
cout<<"Enter your choice:"<<endl;
cin>>ch;
switch(ch){
case 1:push();
break;
case 2:pop();
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
