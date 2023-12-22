/*
    Linear Reccurence Relations

**Solution Steps:**
   The solution is broken down into four steps:

   a. **Determine K, the number of terms on which f(i) depends:**
      - K is the minimum integer such that f(i) doesn’t depend on f(i-M) for all M > K.
      - For the Fibonacci sequence, because the relation is f(i) = f(i-1) + f(i-2), therefore, K = 2.

   b. **Determine vector F1, the initial values:**
      - If each term of a recurrence relation depends on K previous terms, then it must have the first K terms defined, otherwise, the whole sequence is undefined. For Fibonacci sequence (K = 2), the well-known initial values are:
        - f(1) = 1, f(2) = 1
      - We define a column vector F1 as a K x 1 matrix whose first row is f(i), second row is f(i+1), and so on, until the Kth row is f(i+K-1). The initial values of f are given in column vector F1 that has values f(1) through f(K).

   c. **Determine T, the transformation matrix:**
      - This is the most important step in solving the recurrence relation. Construct a K x K matrix T, called the transformation matrix, such that:
        - T * F1 = F2
      - Here is how to construct it. Suppose that the linear recurrence relation is:
        - f(i) = c1 * f(i-1) + c2 * f(i-2) + ... + cK * f(i-K)
      - You can construct T such that its last row is a vector [c1, c2, ..., cK], and for the other rows, the ith row is a zero vector except that its (i+1)th element is 1.

      - **Example:**
        - For the Fibonacci sequence, with f(i) = f(i-1) + f(i-2), the transformation matrix T might look like this:
          ```
          T = | 0  1 |
              | 1  1 |
          ```

   d. **Determine FN:**
      - After constructing the transformation matrix, the rest is straightforward. Obtain Fi for any i by repeatedly multiplying T with F1. In general:
        - Fi = T^(i-1) * F1
      - Therefore, the original problem is now (almost) solved: compute FN as above, and then f(N) is exactly the first row of FN.

   e. **Efficient Implementation:**
      - The article provides a C++ code implementing the solution, using matrix multiplication and exponentiation by squaring for efficiency.

*/
// for fibonacci series

#include<iostream>
#include<vector>

#define REP(i,n) for (int i = 1; i <= n; i++)

using namespace std;

typedef long long ll;
typedef vector<vector<ll>> matrix;

const ll MOD = 1000000007;
const int K = 2;

// computes A * B
matrix mul(matrix A, matrix B)
{
    matrix C(K + 1, vector<ll>(K + 1));
    REP(i, K) REP(j, K) REP(k, K)
        C[i][j] = (C[i][j] + A[i][k] * B[k][j]) % MOD;
    return C;
}

// computes A ^ p
matrix pow(matrix A, int p)
{
    if (p == 1)
        return A;
    if (p % 2)
        return mul(A, pow(A, p - 1));
    matrix X = pow(A, p / 2);
    return mul(X, X);
}

// returns the N-th term of Fibonacci sequence
int fib(int N)
{
    // create vector F1
    vector<ll> F1(K + 1);
    F1[1] = 1;
    F1[2] = 1;

    // create matrix T
    matrix T(K + 1, vector<ll>(K + 1));
    T[1][1] = 0, T[1][2] = 1;
    T[2][1] = 1, T[2][2] = 1;

    // raise T to the (N-1)th power
    if (N == 1)
        return 1;
    T = pow(T, N - 1);

    // the answer is the first row of T . F1
    ll res = 0;
    REP(i, K)
        res = (res + T[1][i] * F1[i]) % MOD;
    return res;
}

int main()
{
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    cout << "The " << N << "-th term of the Fibonacci sequence modulo 1,000,000,007 is: " << fib(N) << endl;

    return 0;
}
