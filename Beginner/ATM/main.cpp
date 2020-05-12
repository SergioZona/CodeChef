#include <iostream>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int numero1;
    float numero2;
    cin >> numero1 >> numero2;
    float valor=(numero2-numero1-0.5);
    if(valor>=0 && numero1%5==0)
    {
        cout << fixed << setprecision(2) << valor << '\n';
    }
    else
    {
        cout << fixed << setprecision(2) << numero2 << '\n';
    }
    return 0;
}
