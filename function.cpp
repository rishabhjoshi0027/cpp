// formal and actual argument in an function 
#include <iostream>
using namespace std ;
int sum(int x, int y)
{
    return x+y ;
}
int main()
{
    int a = 5, b= 6 ;
    int s = sum(a, b) ;
    cout << "The sum is " << s ;
}
// Formal arguments can be of three types
1. ordinary variables of any type 
2. pointer variables 
3. referemce variables