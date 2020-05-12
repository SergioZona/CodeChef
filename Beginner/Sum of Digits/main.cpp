#include <iostream>
#include <iostream>
#include <iomanip>
#include<string>
using namespace std;

int main()
{
    int cases;
    cin >> cases;
    string res="";
    while(--cases>=0)
    {
        string actual;
        cin >> actual;
        int suma=0;
        for (int i =0; i<actual.length();++i)
        {
            char act=actual[i];
            int valor=act-'0';
            suma+=valor;
        }
        res+=to_string(suma)+"\n";
    }
    cout << res;
    return 0;
}
