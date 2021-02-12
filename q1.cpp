#include<iostream>
#include <vector>
using namespace std;

void function (int dd[])
{
    dd[2] = dd[3]+1 ;
    dd[3] = dd[2]-3 ;

}

int main() 
{
    int data[]{4,3,2,5,6} ;
    function (data) ;
    for(auto e:data) 
        cout <<e ;
    cout << endl;
    return 0 ;
 }