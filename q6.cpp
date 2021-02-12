#include<iostream>
#include <vector>
using namespace std;
#include <time.h>

int function (vector <int> v) 
{
    int x = 0 ;
    for (int i = 0 ; i<v.size() ; i++ ) 
        {cout << x << " : " << endl;
        x+=(v[i]%2==0?1:0) ;
        cout << x << " : " ;
        }
    return x;
}
int main() 
{
    srand(time(NULL)) ;
    vector<int>v ;
    for(int i = 0; i<rand()%20;i++)
        v.push_back(rand()%10) ;
    cout << function(v) << endl;     
 }


