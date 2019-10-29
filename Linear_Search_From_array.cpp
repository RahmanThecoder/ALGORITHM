#include <iostream>
using namespace std;

int search (int arr[], int n, int x)
{
int i;
for(i=0;i<n;i++)
if (arr[i]==x)
return i;
return -1;


}

int main(void){
int arr[]={2,3,4,10,40,50};
int x=10;
int n=sizeof(arr)/sizeof(arr[0]);
int result=search(arr,n,x);
(result==-1)?
cout<<"element is not in the array":cout<<"element in the present\n"<<result+1;
return 0;



}