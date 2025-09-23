![bai21](bai21.png)
#  NNLT_BAI_21
Sample Input 0
```100 28 2013 204 508 0```
Sample Output 0
```2```
Sample Input 1
```150 2006 401 36 58 972 0```
Sample Output 1
```-1```
A **perfect number** is a positive integer that is equal to the sum of its proper positive divisors. Proper divisors are all positive divisors of a number excluding the number itself.
**For example:** the proper divisors of 6 are 1, 2, and 3. 
Their sum is **1+2+3=6**. Since the *sum of the divisors equals the number, 6 is a perfect number*.

- isPerfect function initializes a sum of divisors with 1 because 1 is a **proper divisor of every positive integer.**
- If i is a divisor, we add it to sumOfDivisors. This is the first number in the pair of divisors. For example, if n is 100, when i is 2, the code adds 2 to the sum.
### NOTE:
 ```if (i * i != n)``` prevents the program from adding the same divisor twice.
