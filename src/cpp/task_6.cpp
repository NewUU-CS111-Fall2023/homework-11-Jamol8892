// task_6.cpp
#include <cmath>

bool isPrime(int number) {
    if (number <= 1) return false;
    if (number <= 3) return true;
    if (number % 2 == 0 || number % 3 == 0) return false;
    for (int i = 5; i * i <= number; i += 6) {
        if (number % i == 0 || number % (i + 2) == 0) return false;
    }
    return true;
}

int nextPrime(int n) {
    int prime = n;
    bool found = false;
    while (!found) {
        prime++;
        if (isPrime(prime))
            found = true;
    }
    return prime;
}

class Problem6 {
public:
    std::pair<int, int> generatePrimes(int n) {
        int firstPrime = nextPrime(n);
        int secondPrime = nextPrime(firstPrime);
        return {firstPrime, secondPrime};
    }
};