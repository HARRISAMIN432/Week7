#include<iostream>
using namespace std ;
int triangle(int n) ;
main()
{
    int n ;
    cout << "Enter number of Triangle: " ;
    cin >> n ;
    cout << "Dots in the triangle: " << triangle(n) ;
}

int triangle(int n)
{
    int triangularNumber = 1 , increment = 2;
    if (n == 1) return triangularNumber ;
    triangularNumber = 1 ;
    for(int i = 2 ; i <= n ; i++)
    {
        triangularNumber += increment ;
        increment++ ;
        if(i == n) return triangularNumber ;
    }
}