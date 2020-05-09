#include <iostream>
using namespace std;

int main(){
    string s;
    bool e1 = false;
    int len = 0, k1 = 0, size = 0;
    long long K;

    K = 0;

    cin >> s;
    size = s.size();
    
    for (int i=1; i <= size; ++i){
        e1 = false;
        len = 0;
        k1 = 0;
        for (int j=i; j <= size; ++j){
            
            if (e1 == false && s[j-1]=='0')
                continue;
            
            if(s[j-1]=='1'){
                k1++;
                e1 = true;
            }
            len = j - i + 1;
            
            if(len % k1 == 0)
                K++;
            
        }
    }

    cout << K << endl;

    return 0;
}