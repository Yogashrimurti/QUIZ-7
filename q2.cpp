#include<iostream>
#include <vector>
using namespace std;

void function (vector<int>v)
{
    for(int i =0 ; i<v.size();i++) 
    v[i] ++ ;

}

int main() 
{
    vector<int> v {1,2,3,4,5,6} ;
    function (v) ;
    for(auto e:v) 
        cout <<--e ;
   
    return 0 ;
 }