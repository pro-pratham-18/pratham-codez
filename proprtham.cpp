#include<iostream>
using namespace std;



int main(){
  int count=0;
  int n;
  cout<<"Enter the number :";
  cin>>n;
  for(int i=1;i<=n;i++){
    count+=i;
  }

  cout<<"The sum is:"<<count;
  
  return 0;
  
}
