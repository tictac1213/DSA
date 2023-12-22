// https://www.geeksforgeeks.org/inclusion-exclusion-principle-and-programming-applications/
/*
| A1 ∪ A2  |= |A1 |+ | A2| – |A1 ∩ A2|

 |A| + |B| + |C| - |A ∩ B| - |A ∩ C| - |B ∩ C| + |A ∩ B ∩ C|


    generally sum(odd) - sum(even)
    for |B ∩ C| is e and |A ∩ B ∩ C| is o as it has 3 terms
*/

// Eg - Problem 2: Given N prime numbers and a number M, find out how many numbers from 1 to M are divisible by any of the N given prime numbers. 