#include<iostream>
using namespace std ;
void halfDiamond(int rowSize) ;
main()
{
    int rowSize ;
    cout << "Enter desired number of rows: " ;
    cin >> rowSize ;
    halfDiamond(rowSize) ;
}

void halfDiamond(int rowSize)
{
    for (int i = 1 ; i <= rowSize/2 ; i++)
    {
        for(int j = 1 ; j <= rowSize/2-i ; j++ )
        {
            cout << " " ;
        }
        for(int k = 1 ; k <= i ; k++) 
        {
            cout << "*" ;
        }
        cout << endl ;
    }
    for (int i = 0 ; i < rowSize/2 ; i++)
    {
        for (int j = rowSize/2-i ; j < rowSize/2  ; j++)
        {
            cout << " " ;
        }
        for (int k = 1 ; k <= rowSize/2-i ; k++)
        {
            cout << "*" ;
        }
        cout << endl ;
    }
}
