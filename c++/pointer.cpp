#include<iostream>
#include<string>
using namespace std; 
int main( ) 
{  
  int a=45;
  int*ptra;
  ptra=&a;
  cout<<*ptra<<endl;
  cout<<"the address is :"<<ptra<<endl;
  return 0;
}

