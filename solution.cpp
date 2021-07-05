#include <iostream> 
#include <vector>
#include <math.h>

using namespace std ; 

// maxima longitud que puede tener el parametro n (es decir la longitud del array )
#define MAX_LENGHT 50

int t , n , store [MAX_LENGHT] ; 


//lee la entrada 
// es decir lee un numbero n 
// y despues una secuencia de numeros (n numeros) 
// y los datos los guarde en n y en el array store 
//respectivamente
void readInput ()
{
    cin >> n ; 
    for(int i =0 ; i < n ; i++)
    {
        store[i] =  0;  
        cin >> store [i] ; 
    }
} 




//ordena el array store 
void sortstore (){
    for(size_t i =0 ; i < n-1 ; i++)
    {
        for (size_t j = i; j < n; j++)
        {
            if (store [i] >  store [j] )
            {      
                int aux = store [i] ; 
                store [i] = store [j] ;
                store [j] = aux ; 
            }
        }
        
    }
}

void printstore (){
    for (size_t i = 0; i < n; i++)
    {
        cout << store [i] << " " ; 
    }
    cout << endl ; 
}


//contar la cantidad de elementos que no 
// son eliminados del conjunto despues de
// analizar la diferencia modular de dos en dos  
int countsubset ()
{
    int count = n ; 
    for (size_t i = 0; i < n-1; i++)
    {
        if (abs(store[i] - store [i+1]) <= 1)
        {
            count -- ; 
        }
    }
    return count; 
}

//Limpiar lo que hay en el erray store 
void clearstore (){
    for (size_t i = 0; i < n; i++)
    {
        store[i] = 0 ; 
    }
    
}

int main (){

    cin >> t;

    while (t-- > 0)
    {
        clearstore();
        readInput(); 
        sortstore();
        int c  = countsubset(); 
        if (c < 2 ){
            cout << "cumple" << endl; 
        }
        else {
            cout << "no cumple" << endl;
        }
    }
    
}