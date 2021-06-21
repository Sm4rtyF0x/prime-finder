# prime-finder
This program find prime numbers in range by using Miller-Rabin primality test
## Miller - Rabin Test
###Strong probable primes
The property is the following. For a given odd integer n > 2, let’s write n as 2s⋅d + 1 where s and d are positive integers and d is odd. Let’s consider an integer a, called a base, such that 0 < a < n. Then, n is said to be a strong probable prime to base a if one of these congruence relations holds:
{\displaystyle a^{d}\equiv 1{\pmod {n}}};
{\displaystyle a^{2^{r}\cdot d}\equiv -1{\pmod {n}}}{\displaystyle a^{2^{r}\cdot d}\equiv -1{\pmod {n}}} for some 0 ≤ r < s.
```c++
    for (ll n = 0; n < 1000; n++) { // We'll try to find prime numbers in range 1 - 1000. 
        m_r_test(n, iterations);
    }
```
Just simply change 0 and 1000 values to what you want.
