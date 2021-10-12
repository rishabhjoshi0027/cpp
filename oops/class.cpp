class Myclass 
{
    public:
    int myNum ;
    char myString ;
};
int main()
{
    Myclass myObj ;
    
    myObj.myNum  = 15 ;
    myObj.myString = "Some text" ;

    cout << myObj.myNum << "\n" ;
    cout << myObj.myString ;

    return 0 ;
}