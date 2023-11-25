Explaination, Algorithm and Big Oh Analysis

The Sieve of Eratosthenes is an algorithm used for finding all prime numbers up to a specified integer n.
A prime number is a natural number greater than 1 that has exactly two distinct positive divisors: 1 and itself.
Here's how the Sieve of Eratosthenes works, step-by-step:

Initialize: Create a list of integers from 2 to n. Mark all of these numbers as "unmarked."

Select: Start with the smallest unmarked number p (the first one will be 2).

Mark Multiples: Mark all multiples of p (excluding p itself) as "marked." These numbers are not prime, as they can be divided by 
p without a remainder, in addition to 1 and themselves.

Update p: Move to the next smallest unmarked number and set that as your new p.

Repeat: Go back to step 3 and continue until you have either marked all numbers up to n or no more unmarked numbers are left in the list.

Collect Primes: At the end of this process, all the unmarked numbers in your list are prime.

The Sieve of Eratosthenes is efficient because it avoids redundant work. Once a number is marked, it will never be visited again. Also, multiples of a number are marked as non-prime in a systematic way, which makes the algorithm fast.

In terms of computational complexity, the time complexity of this algorithm is O(nloglogn), making it one of the most efficient algorithms for finding all primes up to a given limit n.
