#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    if (N <= 9) {
        cout << "1
";
        return 0;
    }
    int mul = 1;
    int num = N;
    while (num > 9) {
        num /= 10;
        mul*=10;
    }
    cout << mul - N%mul <<"
";
}