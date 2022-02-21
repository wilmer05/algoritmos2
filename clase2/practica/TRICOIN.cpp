#include<iostream>

using namespace std;

int sqr_sol(int N) {
        int result = 1;
        int acumulado = 1;
        while(acumulado + result + 1 <= N) {
                result++;
                acumulado += result;
        }

        return result;
}

bool puedo_hacer_piramide(long long N, long long val) {

        /*
         * Recordemos que 1 + 2 + 3 + 4 + ... + N = (N * (N+1)) / 2
         * esta es la cantidad de monedas para formar una piramide 
         * de N niveles :)
         */
        return (val * (val+1)) / 2 <= N;
}

int bit_binary_search(int N) {
        int result = 0;

        for(int i = 31; i >=0; i--) {
                //Vemos si es posible hacer una piramide 
                //con nuestro resultado hasta el moment + 2 ^ i
                int test_number = result + (1 << i);
                if(puedo_hacer_piramide(N, test_number)) {
                        result = test_number;
                }
        }

        return result;
}

int binary_s(int N) {
        int l = 1;
        int r = 1000 * 1000 * 1000;

        while(l < r) {
                //Buscamos u punto medio
                int mid = (l + r + 1) / 2;
                // cout << l << " " << r << " " << mid << endl;
                //
                //
                // Si puedo formar una piramide con mid monedas
                // entonces puedo hacer una piramide con todos
                // los numero inferiores
                if(puedo_hacer_piramide(N, mid)) {
                        l = mid;
                } else {
                        //Sino, reduzco el rango por la parte derecha
                        r = mid - 1;
                }
        }
        return l;

}

int main(){
        int T;
        int N;
        cin >> T;

        while(T--) {
              cin >> N;
              cout << binary_s(N) << endl;
              //cout << bit_binary_search(N) << endl;
              //  cout << sqr_sol(N) << endl;
        }
        
        return 0;
}
