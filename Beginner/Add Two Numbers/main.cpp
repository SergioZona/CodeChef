#include <iostream>
#include <iostream>
#include <iomanip>
#include<string>
using namespace std;

int main()
{
    int cases;
    int divisor;
    cin >> cases;
    int contador=0;
    string respuesta="";
    while(--cases>=0)
    {
        int num1, num2;
        cin >> num1 >> num2;
        int suma=num1+num2;
        respuesta+=to_string(suma)+"\n";
    }
    cout << respuesta;
    return 0;
}
