#include <iostream>
using namespace std;

int main(){
    int t = 0, n = 0, k1 = 0, k2 = 0;
    int cur = 0;

    cin >> t;
    for (int i=0; i<t; i++){
        cin >> n >> k1 >> k2;
        
        for (int ik = 1; ik <= k1; ik++){
            cin >> cur;
            if(cur == n){
                cout << "YES" << endl;
            }
        }

        for (int ik = 1; ik <= k2; ik++){
            cin >> cur;
            if(cur == n){
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}