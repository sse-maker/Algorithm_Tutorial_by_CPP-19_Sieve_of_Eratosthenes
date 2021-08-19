//
//  main.cpp
//  19_Sieve_of_Eratosthenes
//
//  Created by 세광 on 2021/08/19.
//

#include <iostream>

using namespace std;

int number = 1000;
int a[100001];

void PrimeNumberSieve() {
    for (int i = 2; i <= number; i++) {
        a[i] = i;
    }
    for (int i = 2; i <= number; i++) {
        if (a[i] == 0) continue;
        for (int j = i + i; j <= number; j += i) {
            a[j] = 0;
        }
    }
    for (int i = 2; i <= number; i++) {
        if (a[i] != 0) cout << a[i] << ' ';
    }
    cout << endl;
}

int main() {
    PrimeNumberSieve();
}
