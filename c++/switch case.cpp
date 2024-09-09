#include <bits/stdc++.h>
using namespace std;

int main() {
	int age;
	cout<<"enter your age:"<<endl;
	cin>>age;
	
	switch(age)
	{
	    case 12:
	    cout<<"you are 12 yrs old"<<endl;
	    break;
	    case 18:
	    cout<<"you are 18 yrs old"<<endl;
	    break;
	    
	    default:
	    cout<<"you are neither 12 nor 18"<<endl;
	}
	return 0;

}
