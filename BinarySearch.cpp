#include<iostream>
using namespace std;
int binarysearch(int a[],int i,int n,int no){
int low=0;
int high = n-1;
int mid = (low+high)/2;
while(low<=high){
if(a[mid]==no){
return mid+1;
 }
 else if(a[mid]<no){
 low=mid+1;
}
 else{
 high=mid-1;
}
}
return -1;
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
int searchindex=binarysearch(a,i,n,no);
cout<<"the element"<<no<<"found at position"<<searchindex<<endl;
return 0;
}
