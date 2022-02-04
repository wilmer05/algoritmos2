//incluimos la libreria de IO
#include<iostream>

// Asi podemos usar el namespace estandar
using namespace std;

int main() {

        //Definimos una variable de tipo entero
        int w;

        cin >> w;

        if(w % 2 == 0 && w > 2) {
                // En este caso podemos dividir el melon
                // en dos partes: w - 2 y 2
                // Entonces debemos responder YES
                cout << "YES" << endl;   
        } else { 
                cout << "NO" << endl;
        }

        
        return 0;
}
