#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    int n;
    long long factorial = 1;
    cout<<"Dame un número para calcular su factorial: ";
    cin>>n;
    if(n < 0){
        cout<<"No existe el factorial de un número negativo\n";
    } else {
        for(int i = 1; i <= n; i++){
            factorial = factorial * i;
        }
        cout<<"El factorial de "<<n<<" es: "<<factorial<<"\n";
    }
    return 0;
}