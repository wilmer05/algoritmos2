//incluimos la libreria de IO
#include<iostream>

// Asi podemos usar el namespace estandar
using namespace std;

int main() {

        //Cantidad de grupos que se formaran con los imanes
        int grupos = 0;

        //Definimos un string
        string user_name;
        cin >> user_name;
        
        int distintos_characteres = 0;
        string posibles_caracteres="abcdefghijklmnopqrstuvwxyz";
        for (int i = 0; i < posibles_caracteres.length(); i++) {

                for(int j = 0; j < user_name.length(); j++) {

                        if(posibles_caracteres[i] == user_name[j]) {

                                distintos_characteres++;
                                // distintos_characteres+=1;
                                // distintos_characteres = distintos_characteres + 1;
                                //Para salir de el for der user_name
                                ///no queremos contar mas de una vez
                                break;
                        }

                } 

        }

        if ( distintos_characteres % 2 == 0 ) {
                cout << "CHAT WITH HER!" << endl;
        } else {
                cout << "IGNORE HIM!" << endl;
        }
        
        return 0;
}
