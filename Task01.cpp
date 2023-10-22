#include<iostream>
using namespace std ;
void diamond(int rowSize) ;
main()
{
    int rowSize ;
    cout << "Enter desired number of rows: " ;
    cin >> rowSize ;
    diamond(rowSize) ;
}

void diamond(int rowSize) 
{
    for (int row = rowSize ; row >= 1 ; row--) 
    {
        for(int col = 1 ; col <= row ; col ++)
        {
            cout << "*" ;
        }
        cout << endl ;
    }
}
