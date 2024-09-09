#include <iostream>;
using namespace std;

int main()
{
    int first,second,add,subs,multi;
    float division;
    cout<<"please enter two integers";
    cin>>first>>second;
    add=first+second;
    subs=first-second;
    multi=first*second;
    division=first/(float) second;
    cout<<endl<<"sum is "<<add;
    cout<<endl<<"substraction is "<<subs;
    cout<<endl<<"multiplication is "<<multi;
    cout<<endl<<"division is "<<division;
return 0;
}

    
    
