#include<iostream>
using namespace std;
int main(){
int i,j,m,n,p,q,a[30][30],b[30][30],c[30][30];
cout<<"Enter the value of m"<<endl;
cin>>m;
cout<<"Enter the value of n"<<endl;
cin>>n;
cout<<"Enter the value of p"<<endl;
cin>>p;
cout<<"Enter the value of q"<<endl;
cin>>q;
cout<<"Enter the elements of 1st matrix"<<endl;
for(i=0;i<m;i++){
for(j=0;j<n;j++){
cin>>a[i][j];
}
}
 cout<<"Enter the elements of 2nd matrix"<<endl;

for(i=0;i<p;i++){
for(j=0;j<q;j++){
cin>>b[i][j];
}
}
 cout<<" 1st matrix"<<endl;
for(i=0;i<m;i++){
for(j=0;j<n;j++){
cout<<a[i][j]<<" ";
}
cout<<"\n";
}
 cout<<" 2nd matrix"<<endl;

for(i=0;i<p;i++){
for(j=0;j<q;j++){
cout<<b[i][j]<<" ";
}
cout<<"\n";
}
if(m==p && n==q){
for(i=0;i<m;i++){
for(j=0;j<n;j++){
c[i][j]= a[i][j]+b[i][j];
}
}
cout<<"resultant matrix is"<<endl;
for(i=0;i<m;i++){
for(j=0;j<n;j++){
cout<<c[i][j]<<" ";
}
cout<<"\n";
}
}
else{
cout<<"The summation can't be done"<<endl;
}
return 0;
}
