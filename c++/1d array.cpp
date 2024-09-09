#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,3,6};
    int marks[6];
    for(int i=0;i<6;i++)
    {
    cout<<"enter the marks of "<<i <<" th student is:"<<endl;
    cin>>marks[i];
    }
    for(int i=0;i<6;i++)
    {
       cout<<"the marks of the "<< i<<" th student is:"<< marks[i] <<endl; 
    }
return 0;
}
