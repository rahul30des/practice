#include <iostream>
#include <vector>

std::vector<int> sieveOfEratosthenes(int n) {
    std::vector<bool> prime(n+1, true);
    prime[0] = prime[1] = false; // 0 and 1 are not prime numbers

    for (int p = 2; p * p <= n; p++) {
        if (prime[p]) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    std::vector<int> primeNumbers;
    for (int i = 2; i <= n; i++) {
        if (prime[i])
            primeNumbers.push_back(i);
    }

    return primeNumbers;
}

int main() {
    int n;
    std::cout << "Enter the maximum number: ";
    std::cin >> n;

    std::vector<int> primes = sieveOfEratosthenes(n);

    std::cout << "Prime numbers up to " << n << " are: ";
    for (int prime : primes)
        std::cout << prime << " ";
    std::cout << std::endl;

    return 0;
}
