//incluimos la libreria de IO
#include<iostream>

// Asi podemos usar el namespace estandar
using namespace std;

int main() {

        //Definimos una variable de tipo entero
        int n;

        //Cantidad de grupos que se formaran con los imanes
        int grupos = 0;

        //Definimos un string
        string ultima_cadena= "XXXXXX";
        string cadena_actual = "XXXXXX";

        cin >> n;

        for(int i = 0; i < n; i++) {
               cin >> cadena_actual;

               // Si es un iman distinto al ultimo, entonces se va a separar
               if (cadena_actual != ultima_cadena) {
                        grupos++;          
               }
               ultima_cadena = cadena_actual;
        } 

        cout << grupos << endl;
        
        return 0;
}
