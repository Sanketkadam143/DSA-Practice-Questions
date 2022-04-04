// Swapping array using recursion technique
#include<bits/stdc++.h>
using namespace std;

void swaparr(int i,int n,int arr[]){

  if(i==n){
      return ;
  }
  swap(arr[i],arr[n]);
 
  swaparr(i+1,n-1,arr);
 
}

int main(){
  int n;
  cin>>n;
  
 int arr[n];   

 for (int i = 0; i < n; i++)
 {
     cin>>arr[i];
 }
  swaparr(0,n-1,arr);

 for (int i = 0; i < n; i++)
 {
     cout<<arr[i]<<"  ";
 }
 

 return 0;
}