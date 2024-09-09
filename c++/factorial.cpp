#include <iostream>;
using namespace std;

int main()
{
    int number,factorial=1,i;
    cout<<"enter the number:";
    cin>>number;
    for(i=1;i<=number;i++)
    {
        factorial=factorial*i;
    }
    cout<<endl<<"factorial of the given number is :"<<factorial;
return 0;
}

    
    
