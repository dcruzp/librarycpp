// #include <iostream> 

// //La longitud maxima de los datos de entrada 
// #define MAX_LENGHT 100 

// using namespace std ; 

// //un array de longitud tan grande como pueda haber 
// //datos de entrada , una variable para n y otro para 
// // la sumatoria de los datos de entrada 
// float store [MAX_LENGHT];  
// int n , sum ; 

// int main ()
// {
//     //leo el valor de n para saber la cantidad de 
//     //elementos que hay en la entrada
//     cin >> n ;

//     //pongo la variable sumatoria en cero y hago 
//     //un for para leer y suma todos los datos de 
//     //la entrada
//     sum = 0 ;  
//     for (size_t i = 0; i < n; i++)
//     {
//         cin >> store[i]; 
//         sum += store [i]; 
//     }
    
//     //imprimo la  suma de los datos entre la cantidad 
//     //de datos para saber el promedio de los datos 
//     cout << sum / (float)n  << endl ; 
// }


// ------------------------------------------------OTRA SOLUCION DEL PROBLEMA--------------------------------------------------------/

#include<iostream>


using namespace std;

void porcentajes(float);
float calcular( float a[] , float);
float n;
float a[100];

int main()
{
    cin>>n;
    porcentajes(n);
    cout<<calcular(a,n)<<endl;
    return 0;
}

void porcentajes(float n)
{
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
}

float calcular( float a[] , float n)
{  
    float cont = 0;
    for (int i = 0; i < n; i++)
    {
        cont += a[i];
    }
    return cont / n;
}