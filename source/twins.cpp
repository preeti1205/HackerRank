/*
Lia is fascinated by anything she considers to be a twin. She calls a pairs of positive integers, and , twins if:

    They are both prime. A prime number is an integer greater than that has no positive divisors other than and itself.

    Their absolute difference is exactly equal to (i.e., ).

Given an inclusive interval of integers from to , can you help Lia find the number of pairs of twins there are in the interval (i.e., )? Note that pairs and are considered to be the same pair.

Input Format

Two space-separated integers describing the respective values of and .

Constraints

Output Format

Print a single integer denoting the number of pairs of twins.

Sample Input 0

3 13

Sample Output 0

3

Explanation 0

There are three pairs of twins : (3,5), (5,7), (11,13)
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool isPrime(int num) {
    if (num == 0 || num == 1) return false;
    int factors = 0;
    for(int i= 1; i <= ceil(sqrt(num)); i++) {
        if (num%i == 0) factors++;
        if (factors > 1) return false;
    }
    return true;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, m;
    int count = 0;
    cin>>n>>m;
    for(int i = n; i <= m ; i++) {
        for(int j = i+1; j <= m && isPrime(i); j++) {
            if (isPrime(j)) {
                if (abs(i-j) == 2) count++;
            }
        }
    }
    cout<< count;
    return 0;
}
