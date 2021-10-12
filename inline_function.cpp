// using of the inline function 
#include <iostream>
using namespace std ;
inline void fun()
{
    cout << "You are in fun" ;
}
int main()
{
    cout << "You are in main" ;
    fun() ;
}