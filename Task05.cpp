#include<iostream>
using namespace std ;
bool isPrime(int num) ;
main()
{
    int num ;
    cout << "Enter Number: " ;
    cin >> num ;
    cout << isPrime(num) ;
}

bool isPrime(int num)
{
    for(int i = 2 ; i < num ; i++)
    {
        if(num % i == 0) return false ;
    }
    return true ;
}