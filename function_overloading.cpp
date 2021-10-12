// When there are two function with same name that is called as the fucntion overloading 
#include <iostream>
using namespace std ;
int area(int, int) ;
float area(int) ;
int main()
{
    int r ;
    cout << "Enter radius of a circle" ;
    cin >> r ;
    float A = area(r) ;
    cout << "The area of the circle is" << A ;
    int l, b, a ;
    cout << "\nEnter the length and breadth of rectangle\n" ;
    cin >> l >> b ;
    a = area(l, b) ;
    cout << "Area of rectangle is" << a ;
}
float area(int r) 
{
    return 3.14*r*r ;
}
int area( int x, int y)
{
    return x*y ;
}