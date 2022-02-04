//incluimos la libreria de IO
#include<iostream>
//Incluimos la libreria de manejo de strings en C++
#include<string>

// Asi podemos usar el namespace estandar
using namespace std;

int main() {

        // Variable entera para guardar cuantas lineas
        int n;
        int x = 0;

        //Definimos una variable de tipo entero
        string s;

        cin >> n;

        //Iteramos n veces, declarando una variable i que hara de
        //contador
        for (int i = 0; i < n; i ++) {
                cin >> s;

                //Comparamos los strings
                if(s == "X++" || s=="++X") {
                        x++;
                } else if(s == "X--" || s == "--X") {
                        x--;
                }
        }

        cout << x << endl;

        
        return 0;
}
