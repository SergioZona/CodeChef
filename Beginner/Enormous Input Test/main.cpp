#include <iostream>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int cases;
    int divisor;
    cin >> cases >> divisor;
    int contador=0;
    while(--cases>=0)
    {
        int numeroActual;
        cin >> numeroActual;
        contador+=(numeroActual%divisor==0)?1:0;
    }
    cout << contador;
    return 0;
}
