#include <iostream>
#include <iomanip>  // number precision
#include <stdio.h>  // getchar()
#include <time.h>  // calculate time
#include <windows.h>  // calculate time

using namespace std;

long double fib[100000];
int n;

clock_t start, stop;
double czas;

int main()
{
    cout << "Ile liczb Fibonacciego wyznaczyc: ";
    cin >> n;

    start = clock(); // timer

    fib[0]=1;
    fib[1]=1;

    for (int i=2; i<n; i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }

    /*cout << setprecision(10000);


    for (int i=0; i<n; i++)
    {
        cout << endl << "Wyraz nr " << i+1 << ": " << fib[i];
    }*/


    //cout << endl << "Wyraz nr " << n << ": " << fib[n-1] << endl << endl;

    cout << endl << endl << "Zlota liczba: " << fib[n-1]/fib[n-2] << endl << endl;

    stop = clock();
    czas = (double)(stop-start) / CLOCKS_PER_SEC;

    cout << fixed << setprecision(3);

    cout << "Czas liczenia i wyswietlenia wszystkich liczb: " << czas << " s" << endl << endl;

    cout << "Press Enter to close program...";

    getchar(); getchar();

    return 0;
}
