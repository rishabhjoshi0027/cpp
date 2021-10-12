// call by reference 
#include <iostream>
using namespace std ;
int sum(int &x, int &y)
{
    return x+y ;
}
int main()
{
    int a = 5, b = 5 ;
    int s = sum(a, b) ;
    cout << "sum is" << s ;
}