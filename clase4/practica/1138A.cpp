#include<iostream>
#include<algorithm>

using namespace std;

int main() {

        int n, tmp, last = -1, sol = 0;
        int cnt[2];
        cin >> n ;
        cnt[0] = 0;
        cnt[1] = 0;
        

        for(int i=0 ; i < n; i++) {
                cin >> tmp;
                tmp--;
                if(tmp != last) {
                        cnt[tmp]=1; 
                } else cnt[tmp]++;
                sol = max(sol, min(cnt[tmp], cnt[1-tmp]) << 1);
                last = tmp;
        }

        cout << sol << endl;
        return 0;
}
