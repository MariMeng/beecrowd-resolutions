#include <bits/stdc++.h>

using namespace std;


int main(){
    vector <int> array;
    int resul = 0;

    for(int i = 0;i< 4;i++){
        int n;
        cin >> n;
        array.push_back(n);
        resul += n;
    }

    resul-=3;

    cout << resul <<endl;
    return 0;
}