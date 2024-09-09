#include<iostream>
using namespace std; 
int main( ) 
{  
	int arr[4][2] = {
		{ 10, 11 },{ 20, 21 },{ 30, 31 },{ 40, 41 }
	} ;
		
	int i,j;
 cout << "Elements of 2D Array are : \n" ;
   for (int x = 0; x < 4 ; x++)   // Outer for loop for traversing rows
   {
      for(int y = 0; y < 2 ; y++)   // Inner for loop for traversing columns
      {
         cout << "\t" << arr[x][y] ;   // Print individual array element
      }
      cout << endl;
   }
return 0;
}

