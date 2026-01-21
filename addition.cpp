#include <bits/stdc++.h>
using namespace std;

int add(int a, int b){ 
    if (a == 0) {
        return b;
    }
    if (b == 0) {
        return a; 
    }
    return add((a & b) << 1, a ^ b);   
}
int main() {
    int a, b; 
    cin >> a >> b; 
    cout << add(a, b); 
}
