#include<iostream>
using namespace std ;
void amplify(int n) ;
main()
{
    int n ;
    cout << "Enter the number to Amplify: " ;
    cin >> n ;
    amplify(n) ;
}

void amplify(int n)
{
    int num ;
    for(int i=1 ; i<=n ; i++) 
    {
        num = i ;
        if(i % 4 == 0)
         num = i * 10 ;
        
        if(i == n) {cout << num ;
        break ;}
        cout << num << ", ";
    }
}