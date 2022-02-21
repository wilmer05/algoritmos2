//incluimos la libreria de IO
#include<iostream>

// Asi podemos usar el namespace estandar
using namespace std;

int cnt[27] = {0};

int main() {

        //Cantidad de grupos que se formaran con los imanes
        int grupos = 0;

        //Definimos un string
        string user_name;
        cin >> user_name;
        
        int distintos_characteres = 0;
        for(int j = 0; j < user_name.length(); j++) cnt[user_name[j] - 'a'] = 1; 


        if ( (std::count(cnt, cnt+27, 1) & 1) == 0 )
                cout << "CHAT WITH HER!" << endl;
        else 
                cout << "IGNORE HIM!" << endl;
        
        
        return 0;
}
