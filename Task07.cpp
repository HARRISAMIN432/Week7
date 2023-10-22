#include <iostream>
using namespace std;
string hospital(int days);
main()
{
    int days;
    cout << "Enter Number of days you visited hospital: ";
    cin >> days;
    cout << hospital(days);
}

string hospital(int days)
{
    int doctors = 7, patients, treated = 0, untreated = 0 ;
    for (int i = 1; i <= days; i++)
    {
        cout << "Number of patients who visited hospital on Day " << i << ": ";
        cin >> patients;
        if (patients < doctors)
        {
            treated += patients;
        }
        else
        {
            treated += doctors;
            untreated += patients - doctors;
        }
        if (patients > doctors)
            doctors++;
    }
    return "Treated Patients: " + to_string(treated) + "\nUntreated Patients: " + to_string(untreated);
}
