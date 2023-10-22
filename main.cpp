#include <iostream>
using namespace std;

int main(){
    int n, i, j;
    cin >> n;
    if(n * (n + 1) % 4 != 0){ //потому что сумма всех мисок - n * (n + 1) / 2
        cout << "NO\n";
        return 0; //выход из программы
    }
    cout << "YES" << '\n';
    if(n % 4 == 0){
        cout << n / 2 << '\n';
        for(int i = 1; i <= n - i + 1; i += 2){
            cout << i << ' ' << n - i + 1 << ' ';
        }
        cout << '\n';
        cout << n / 2 << '\n';
        for(int i = 2; i <= n - i + 1; i += 2){
            cout << i << ' ' << n - i + 1 << ' ';
        }
        cout << '\n';
        return 0;
    }


    cout << n / 2 + 1 << '\n';
    for(int i = 1; i <= n - i; i += 2){
        cout << i << ' ' << n - i << ' ';
    }
    cout << '\n';
    cout << n / 2 << '\n';
    for(int i = 2; i <= n - i; i += 2){
        cout << i << ' ' << n - i << ' ';
    }
    cout << n << '\n';
}