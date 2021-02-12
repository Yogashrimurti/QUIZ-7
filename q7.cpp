#include<iostream>
#include <vector>
using namespace std;
#include <time.h>

void somefunction(vector<int> &v) 
{
    int x = v[v.size() - 1] ;
    for(int i =v.size()-1 ; i > 0 ;i--) 
        v[i] = v[i-1] ;
    v[0] = x ;

}
int main() 
{
    vector<int> v{5,2,3,1,4} ;
    somefunction(v) ;
    for(auto e:v) 
        cout << e  ;
    return 0 ;

}