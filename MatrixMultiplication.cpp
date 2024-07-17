#include<iostream>
using namespace std;
int main(){
int m,n,q,i,j,a[30][40],b[30][40],c[30][40],sum=0;
cout<<"Enter the row and coloum of 1st matrix"<<endl;
cin>>m;
cin>>n;
cout<<"Enter the coloum of 2nd matrix"<<endl;
cin>>q;
cout<<"Enter the elements of 1st matrix"<<endl;
for(i=0;i<m;i++){
for(j=0;j<n;j++){
cin>>a[i][j];
}
}
 cout<<"Enter the elements of 2nd matrix"<<endl;
for(i=0;i<n;i++){
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
for(i=0;i<n;i++){
for(j=0;j<q;j++){
cout<<b[i][j]<<" ";
}
cout<<"\n";
}
for(i=0;i<m;i++){
for(j=0;j<q;j++){
for(int k=0;k<n;k++){
sum += a[i][k]*b[k][j];
}
c[i][j]=sum;
sum=0;
}
}
cout<<"resultant matrix is"<<endl;
for(i=0;i<m;i++){
for(j=0;j<q;j++){
cout<<c[i][j]<<" ";
}
cout<<"\n";
}
return 0;
}
