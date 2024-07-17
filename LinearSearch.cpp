#include<iostream>
using namespace std;
void linearsearch(int a[],int i,int n,int no){
int pos;
for(i=0;i<n;i++){
if(a[i]==no){
pos=i;
break;
}
}
if(pos==i)
cout<<"number is present at"<<pos+1<<endl;
else
cout<<"number is not present in the array"<<endl;
}
int main(){
int a[20],i,n,no,pos;
cout<<"size of the array"<<endl;
cin>>n;
cout<<"Enter the elements"<<endl;
for(i=0;i<n;i++){
cin>>a[i];
}
cout<<"Enter the elements to be searched"<<endl;
cin>>no;
linearsearch(a,i,n,no);
return 0;
}
