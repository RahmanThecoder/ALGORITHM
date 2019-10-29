#include<iostream>
using namespace std;
// this is not the  recursive way to 
// solve this also recursive way

int binarySearch(int arr[],int l,int r,int x)
{

while(l<=r)
{
int m=l+(r-l)/2 ;
if(arr[m]==x)
return m;

 

if (arr[m]<x)
l=m+1;
else 
r=m-1;

}
return -1;
}

int main (void){
int arr[]={5,7,3,99,87,12};
int n=sizeof(arr) /sizeof(arr[0]);
int x= 99;
int result = binarySearch(arr,0,n-1,x);

(result==-1)? cout<<"element found\n": cout <<"element not found\n"<< result;
cout<<result;
return 0;

}



/* int binarySearch(int arr[],int l,int r,int x)
{

while(l<=r){
int mid=l+(r-l)/2;
if(arr[m]==x)
return m;
if(arr[m]< x)
l=m+1;
else
r=m-1;
}
return -1;


}


while(l<=r){
int m=l+(r-l)/2;

if (arr[m]==x)
return m;

if(arr[m]<x)
l=m+1;
else 
r=m-1;


}
return -1;
} */