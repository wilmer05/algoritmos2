#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
vector<int> a;
int main() {
        int T;
        cin >> T;
        int n;

        while(T--) {
                cin >> n;
                a.resize(n);
                for(int i=0 ;i < n ; i++) {
                        cin >> a[i];
                }
                sort(a.begin(), a.end());
                long long count;
                long long sol = 0;
                for(int i = 0; i < a.size(); i++) {
                        count = 1;
                        long long so_far = i;
                        while(i + 1 < a.size() && a[i] == a[i+1]) {
                                count++;
                                i++;
                        }
                        if(count > 1)  {
                                i--;
                        }
                        sol += so_far * count;
                }
                cout << sol << endl;

        }

        return 0;
}
