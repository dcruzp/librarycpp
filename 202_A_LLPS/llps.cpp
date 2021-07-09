#include<iostream>
#include <string.h>

using namespace std;

void comprobacion(string);
void comparacionOrden(string);

 string a;
 int b[256], r = 0;


int main()
{
    // guardando el string de entrada:
    cin>>a;
    comprobacion(a);
    comparacionOrden(a);

    return 0;
}
// macheo de los caracteres del string
// y comprobando y guardandolos en codigo ASCCI:
void comprobacion(string a)
{
    
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < 256; j++)
        {
            if(j == (int)a[i])
            {
               b[r] = j; 
               r++;
            }
        }
        
    }
    
}
// comparacion:
void comparacionOrden(string a)
{
    int aux = 0;
    int cont = 0;
    string p = "";
    for (int i = 0; i < r; i++)
    {
        for (int j = i+1; j < r; j++)
        {
            if(b[i] < b[j])
            {
                aux = b[i];
                b[i] = b[j];
                b[j] = aux;
            }
        }
        
    }
    for (int i = 0; i < a.size(); i++)
    {
        if((int)a[i] == b[0])
        {
            p += a[i];
        }
    }
    

    // salidad de la subsecuencia palindrómica 
    // lexicográficamente más grande del string a:
    cout<<p<<endl;
}