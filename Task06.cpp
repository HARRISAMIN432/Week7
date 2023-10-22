#include <iostream>
using namespace std;
int primorial(int num);
bool isPrime(int n);
main()
{
    int num;
    cout << "Enter Number: ";
    cin >> num;
    cout << primorial(num);
}

bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int primorial(int num)
{
    int count = 0, n = 2, result = 1;
    while (count != num)
    {
        
        if (isPrime(n))
        {
            result *= n;
            count++;
        }
        n++ ;
    }
    return result;
}
