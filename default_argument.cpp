// consider we have an 2 add function 1 function is sending 2 values and 2 function is sending 3 
//values so if in function dec we intialise the 3 rd element to be 0 then it will swap the value 
// in case if req 
#include <iostream>
using namespace std ;
int sum(int , int , int = 0);
int main()
{
    int a, b ;
    cout << "Enter two numbers" ;
    cin >> a >> b ;
    cout << "sum is" << sum(a, b) ;
    int c ;
    cout << "enter three numbers" ;
    cin >> a >> b >> c ;
    cout << "the sum is" << sum(a, b, c) ;
    return 0 ;
}
int sum(int x , int y, int z)
{
    return x+y+z ;
}