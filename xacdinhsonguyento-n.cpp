#include<iostream>
// câu 1
using namespace std;

int main() {
    int n; // Khai báo biến n
    cin >> n; // nhập giá trị cho n
    bool nguyento;
    if (n < 2) {
        nguyento = false; // số nguyên tố phải lớn hơn 1
    } else {
        nguyento = true;
        } int i = 2;
        if (n > 2 && n % i == 0) {
            nguyento = false; // số nguyên tố chỉ chia hết cho 1 và chính nó
        }
    if (nguyento == true) {
        cout << "n là số nguyên tố";
    } else {
        cout << "n không phải là số nguyên tố đâu";
    }
    return 0;
}