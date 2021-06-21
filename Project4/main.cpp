//This program maded by maksut ahmet bayram
//We added the libraries we need
#include "iostream"
#include "random"
#include "stdlib.h"
#include "cstdlib"
#include "cmath"

#define ll long long

using namespace std;

// We are cheking to primality of given number here.


// This method generetes random intagers in range 2 to n - 2.
ll generate_random(ll a, ll b) {
    default_random_engine generator; // We creat a generator.
    uniform_int_distribution<ll> distribution(a, b); // We entered our range.
    ll result = distribution(generator); // Generating random number.
    return result; // Returns the result.
}

// This method makes (a ^ b) % c and return it.
ll power(ll a, ll b, ll c) {
    ll result = 1; // Initialize result.
    a = a % c; // Update a if it is more than or equal to c.
    if (a == 0) {  // In case a is divisible by c;
        return 0;
    }
    while (b > 0) {
        if (b % 2 != 0) { // If b is odd, multiply a with result
            result = (result * a) % c;
        }
        b /= 2; // y must be even now y = y / 2
        a = (a * a) % c;
    }
    return result;
}

bool check_primality(ll r, ll d, ll n) {
    ll a = generate_random(2, (n - 2)); // Here we call generate_random method for generating random number in range (2, n-2).
    ll x = power(a, d, n); // x = a ^ d % n
    if (x == n - 1 || x == 1) { // If x equals to n - 1 or 1 returns true it means prime.
        return true;
    }
    for (ll i = 1; i <= r - 1; i++) { // We are trying to prove primality r - 1 times.
        x = (x * x) % n; // x = x^2 % n
        if (x == n - 1) { // If x equals to n - 1 returns true it means prime.
            return true;
        }
    }
    return false; // Else it returns false it means composite.
}

void m_r_test(ll n, ll iterations) {
    if (n > 3 && n % 2 != 0) { // In this section we are eliminate numbers that can be divided by 2.
        ll d = n - 1;  // Here to end of while loop, we try to solve n - 1 = 2 ^ r * d equition.
        ll r = 0;
        while (d % 2 == 0) {
            d /= 2;
            r++;
        }
        bool prime = true;
        for (ll i = 0; i < iterations; ++i) { // Attepmting for refute numbers primality.
            prime = check_primality(r, d, n); // Creating a boolean for chek the number prime or not.

        }
        if (prime == true) { // If it's prime the prints number.
            cout << n << endl;
        }
    }
}
// this is main method.
int main(int argc, char const* argv[]) {
    ll iterations = 5; // Number of attempts to refute its primality.
    ll from;
    ll to;
    cout << "From number: ";
    cin >> from;
    cout << "To number: ",
    cin >> to;
    if (from <= 2) {
        cout << 2 << endl; // Adding corner cases.
        cout << 3 << endl; // Adding corner cases.
    }
    if (from == 3) {
        cout << 3 << endl;
    }
    for (ll n = from; n < to; n++) { // We'll try to find prime numbers in range from - to. 
        m_r_test(n, iterations);
    }
    return 0;
}
