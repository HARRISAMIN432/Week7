#include<iostream>
#include<iomanip>
using namespace std;
void cargo(int n);
main()
{
    int n;
    cout << "Enter the count of cargo for transportation: ";
    cin >> n;
    cargo(n);
}

void cargo(int n)
{
    float tonnage, price = 0, minibus = 0, truck = 0, train = 0 , totalTonnage = 0 ;
    for (int i = 1; i <= n; i++)
    {
        cout << "Enter the tonnage of cargo " << i << ": ";
        cin >> tonnage;
        if (tonnage <= 3)
        {
            price += 200 * tonnage;
            minibus += tonnage;
        }
        if (tonnage > 3 && tonnage <= 11)
        {
            price += 175 * tonnage;
            truck += tonnage ;
        }
        if (tonnage > 11)
        {
            price += 120 * tonnage;
            train += tonnage;
        }
        totalTonnage += tonnage ;
    }
    cout << fixed << setprecision(2) ;
    cout << price/totalTonnage << endl ;
    cout << minibus/totalTonnage * 100 << "%" << endl;
    cout << truck/totalTonnage * 100  << "%" << endl;
    cout << train/totalTonnage * 100 << "%" << endl ;
}

