#include<iostream>
using namespace std;

// program for the product of n natural number 

int main(){
  int count=1;
  int n;
  cout<<"Enter the number :";
  cin>>n;
  for(int i=1;i<=n;i++){
    count*=i;
  }

  cout<<"The product is:"<<count;
  
  return 0;
  
}


//program fir the product 