#include<iostream>
#include <math.h>

using namespace std;
// variables globales:
int a[2] , cont = 0;

int main()
{
    // guardado los valores en el array a:
    for (int i = 0; i < 2; i++)
    {
        cin>>a[i];
    }
    // Se comprueba si las expreciones: {(a^2) + b = n y a + (b^2) = m}
    for (int i = 0; i < 1000; i++)
    {
        for (int j = 0; j < 1000; j++)
        {
            if((a[0] == pow(i,2) + j)&&(a[1] == i + pow(j,2)))
            {
                cont += 1;
            }
        }
        
    }
    // mostrando resultados:
    cout<<cont<<endl;
     



    return 0;
}