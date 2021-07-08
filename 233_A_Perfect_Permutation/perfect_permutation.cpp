#include<iostream>


using namespace std;

void generararray(int);
int n;

int main()
{
    cin>>n;
    // imprime salida:
    generararray(n);
    return 0;
}

void generararray(int n)
{
    int aux = 0;
    int a[n];
    // Se guarda en el array un listado de
    // numeros enteros empezando por el uno
    // o sea su mismo indice respectivamente:
    for (int i = 1; i <= n; i++)
    {
        a[i] = i;
    }
    
    // se intercambia el valor: 
    for (int i = 1; i + 1 <= n; i += 2)
    {
        aux = a[i];
        a[i] = a[i + 1];
        a[i + 1] = aux;
    }
     
    // se comprueba 
    if(a[n] != n)
    {
        for (int i = 1; i <= n; i++)
        {
            cout<<a[i]<<" ";
            
        }
        cout<<endl;
    }
    else
    {
        cout<<"-1"<<endl;
    }
}