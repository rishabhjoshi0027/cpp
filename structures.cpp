// taking user input 
#include <iostream>
using namespace std ;
void display(book b);
book input();
struct book
{
    int bookid ;
    char title[20] ;
    float price ;
};
int main()
{
    book b1 ;
    b1 = input() ;
    display(b1) ;
}
void display(book b)
{
    cout << "\n" << b.bookid <<" "<< b.title << " " << b.price 
}
struct/ input()
{
    int b ;
    cout << "Enter bookid, tile and price " ;
    cin >> b.bookid >> b.title>> b.price ;
    return b ;
}