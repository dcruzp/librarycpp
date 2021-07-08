// #include <iostream> 
// #include <vector>
// #include <math.h>

// using namespace std ; 

// // maxima longitud que puede tener el parametro n (es decir la longitud del array )
// #define MAX_LENGHT_T 1001
// #define MAX_LENGHT_N 51

// int t , n , store [MAX_LENGHT_N] ; 
// string results [MAX_LENGHT_T]; 

// //lee la entrada 
// // es decir lee un numbero n 
// // y despues una secuencia de numeros (n numeros) 
// // y los datos los guarde en n y en el array store 
// //respectivamente
// void readInput ()
// {
//     cin >> n ; 
//     for(int i =0 ; i < n ; i++)
//     {
//         store[i] =  0;  
//         cin >> store [i] ; 
//     }
// } 




// //ordena el array store 
// void sortstore (){
//     for(size_t i =0 ; i < n-1 ; i++)
//     {
//         for (size_t j = i; j < n; j++)
//         {
//             if (store [i] >  store [j] )
//             {      
//                 int aux = store [i] ; 
//                 store [i] = store [j] ;
//                 store [j] = aux ; 
//             }
//         }
        
//     }
// }

// //esto es para imprimir los datos que 
// //hay en el array store 
// void printstore (){
//     for (size_t i = 0; i < n; i++)
//     {
//         cout << store [i] << " " ; 
//     }
//     cout << endl ; 
// }


// //contar la cantidad de elementos que no 
// // son eliminados del conjunto despues de
// // analizar la diferencia modular de dos en dos  
// int countsubset ()
// {
//     int count = n ; 
//     for (size_t i = 0; i < n-1; i++)
//     {
//         if (abs(store[i] - store [i+1]) <= 1)
//         {
//             count -- ; 
//         }
//     }
//     return count; 
// }

// //Limpiar lo que hay en el erray store 
// void clearstore (){
//     for (size_t i = 0; i < n; i++)
//     {
//         store[i] = 0 ; 
//     }
    
// }

// int main (){

//     cin >> t;

//     for (size_t i = 0; i < t ; i++)
//     {
//         clearstore();
//         readInput(); 
//         sortstore();
//         int c  = countsubset(); 
//         if (c < 2 )
//         {
//             results[i] = "YES";   
//         }
//         else 
//         {
//             results[i] = "NO" ; 
//         }
//     }

//     for (size_t i = 0; i < t; i++)
//     {
//         cout << results[i]<< endl ;
//     }

//     return 0 ; 
// }


// --------------------------------------------- OTRA SOLUCION DEL PROBLEMA: ------------------------------------------------------------------------//



#include<iostream>

using namespace std;

void gardararray(int vec[],int);
void ordenararray(int vec[],int);


int vec[50],tam,t;
bool result[100];

int modulodelaresta(int a , int b){
    int result =0;
    a *= -1;
    b *= -1;
    if(a > b){
        result = a - b;
    }
    else{
        result = b - a;
    }
    return result;
}
bool comprobar(int vec[], int);

int main(){
    cin>> t;

    for (int j = 0; j < t; j++)
    {
    cin>>tam; 
        // gardando array:
        gardararray(vec,tam);

        // ordenando array:
        ordenararray(vec,tam);

        // guardando resultado:
        result[j] =  comprobar(vec,tam);
    }

    // mostrando resultados:
    for (int i = 0; i < t; i++)
    {
        if(result[i]){
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
 return 0;
}


void gardararray( int vec[],int tam){
    for (int i = 0; i < tam; i++)
    {
        cin>>vec[i];
    }
}

void ordenararray(int vec[], int tam){
    int aux = 0;
    for (int i = 0; i < tam; i++)
    {
        for (int j = i + 1; j < tam; j++)
        {
            if((j < tam)&&(vec[i] < vec[j])){
                aux = vec[i];
                vec[i] = vec[j];
                vec[j] = aux;
            }
        }
        
    }
    
}

bool comprobar(int vec[], int tam){
    bool esreducible = true;
    if(tam > 1)
    {
    for (int i = 0; i < tam; i++)
    {
        if(i + 1 < tam)
        {
            if(modulodelaresta(vec[i],vec[i+1]) > 1){
                esreducible = false;
                break;
            }
            else
            {
                continue;
            }
        } 
    } 
    }
    if(esreducible)return true;
    else return false;
}