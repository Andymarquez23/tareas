 #include <iostream>
using namespace std;

int main()
{
    // Programa que cuenta de dos en dos hasta un numero n
    int i, n;
    //datos de entrada
    cout << "Ingrese un numero positivo n=";
    cin >> n;
    i = 0;

    while (i <= n)
    {
        cout << i << "\n";
        i = i + 2;
    }

    return 0;
}
