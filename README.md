# Prime Number Finder
This program find prime numbers in range by using Miller-Rabin primality test. Written by C++
## Miller - Rabin Test
The Miller–Rabin primality test or Rabin–Miller primality test is a probabilistic primality test: an algorithm which determines whether a given number is likely to be prime, similar to the Fermat primality test and the Solovay–Strassen primality test.

It is of historical significance for the research of a polynomial-time deterministic primality test. Its probabilistic variant remains widely used in practice, as one of the simplest and fastest tests known.

Gary L. Miller discovered the test in 1976; Miller's version of the test is deterministic, but its correctness relies on the unproven extended Riemann hypothesis.[1] Michael O. Rabin modified it to obtain an unconditional probabilistic algorithm in 1980.

**Strong probable primes**
The property is the following. For a given odd integer n > 2, let’s write n as 2s⋅d + 1 where s and d are positive integers and d is odd. Let’s consider an integer a, called a base, such that 0 < a < n. Then, n is said to be a strong probable prime to base a if one of these congruence relations holds:
- a^d = 1 (mod n)
- a^(2^r\*d) = 1 (mod n) for some 0 ≤ r < s.
The idea beneath this test is that when n is an odd prime, it passes the test because of two facts:
- by Fermat's little theorem, a^(n-1) = 1 (mod n) (this property alone defines the weaker notion of probable prime to base a, on which the Fermat test is based);
- the only square roots of 1 modulo n are 1 and −1.
Hence, by contraposition, if n is not a strong probable prime to base a, then n is definitely composite, and a is called a witness for the compositeness of n (sometimes misleadingly called a strong witness).

However, this property is not an exact characterization of prime numbers. If n is composite, it may nonetheless be a strong probable prime to base a, in which case it is called a strong pseudoprime, and a is a strong liar.
```c++
    for (ll n = 0; n < 1000; n++) { // We'll try to find prime numbers in range 1 - 1000. 
        m_r_test(n, iterations);
    }
```
Just simply change 0 and 1000 values to what you want.
