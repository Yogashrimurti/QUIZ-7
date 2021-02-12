#include<iostream>
#include <vector>
using namespace std;

int main() 
{
    int a[] = {1,2,3,4} ;
    int b[] = {1,2,3,4} ;
    if(a==b)      //this compares the address 
                  // of a and b  which is not equal
    {
        a[0] = b[1] ;
    }
    else{
        a[0] = b [2] ;
    }
    cout << a[0] << endl;
 
    char ch[] = "abcd" ; // size is 5 
    cout << sizeof(ch) << endl;






    return 0 ;
}