// task_8.cpp
#include <utility>

class Problem8 {
public:
    std::pair<int, int> generateED(int p, int q) {
        int phi = (p - 1) * (q - 1);
        int e = findCoprime(phi);
        int d = modInverse(e, phi);
        return {e, d};
    }

private:
    int gcd(int a, int b) {
        if (b == 0) return a;
        return gcd(b, a % b);
    }

    int findCoprime(int phi) {
        // This is a simple approach to find a coprime of phi; in practice, this would be more sophisticated.
        int e = 2;
        while (e < phi && gcd(e, phi) != 1) {
            e++;
        }
        return e;
    }

    int modInverse(int a, int m) {
        // This function assumes that m and a are coprime and uses the extended Euclidean algorithm.
        int m0 = m, t, q;
        int x0 = 0, x1 = 1;

        if (m == 1) return 0;

        while (a > 1) {
            // q is quotient
            q = a / m;
            t = m;
            // m is remainder now, process same as Euclid's algo
            m = a % m, a = t;
            t = x0;
            x0 = x1 - q * x0;
            x1 = t;
        }

        // Make x1 positive
        if (x1 < 0) x1 += m0;

        return x1;
    }
};