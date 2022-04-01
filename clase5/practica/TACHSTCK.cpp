#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
vector<int> L;
int main() {
        int N,D;
        int sol = 0;

        cin >> N >> D;
        L.resize(N);
        for(int i=0 ;i < N ; i++) {
                cin >> L[i];
        }
        sort(L.begin(), L.end());
        for(int i =0 ; i + 1 < N; i++ ) {
                if(L[i+1] - L[i] <= D) {
                        sol++;
                        i++;
                }
        }

        cout << sol << endl;

        return 0;
}
