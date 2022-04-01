#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void insertion_sort(vector<int> &W) {
        for(int i = 0 ; i < W.size(); i++) {
                for(int j = i-1; j >=0; j--) {
                        //Explicacion en el pizarron 
                        //del swap
                        if(W[j] > W[j+1]) {
                                swap(W[j], W[j+1]);
                        }
                }
        }
}

void bubble_sort(vector<int> &W) {
        for(int i = 0 ; i < W.size(); i++) {
                for(int j = 0; j + 1 < W.size(); j++) {
                        //Explicacion en el pizarron 
                        //del swap
                        if(W[j] > W[j+1]) {
                                swap(W[j], W[j+1]);
                        }
                }
        }
}

void bogo_sort(vector<int> &W) {
        while(next_permutation(W.begin(), W.end())) {
                //No hacer nada
                //Seguir iterando
        }
}

int main() {

        int T,N,K;

        cin >> T;
        while(T--) {
                cin >> N >> K;
                vector<int> W(N);

                for(int i=0 ;i < N; i++) {
                        cin >> W[i];
                }

                //insertion_sort(W);
                //bubble_sort(W);
                bogo_sort(W);
                int sum_k_left = 0;
                int sum_k_right = 0;
                int total_sum = 0;

                for(int i = 0 ; i < K; i++) {
                        sum_k_left += W[i];
                        sum_k_right += W[W.size() - i - 1];
                }

                for(int i = 0 ; i < N; i++) {
                        total_sum += W[i];
                }

                cout << max(total_sum - 2 * sum_k_left, sum_k_right - total_sum + sum_k_right) << endl;
        }
        
        return 0;
}
