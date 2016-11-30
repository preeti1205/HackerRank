/*
Kristen loves playing with and comparing numbers. She thinks that if she takes two different positive numbers, the one whose digits sum to a larger number is better than the other. If the sum of digits is equal for both numbers, then she thinks the smaller number is better. For example, Kristen thinks that is better than and that is better than .

Given an integer, , can you find the divisor of that Kristin will consider to be the best?

Input Format

A single integer denoting .

Constraints

Output Format

Print an integer denoting the best divisor of .

Sample Input 0

12

Sample Output 0

6

Explanation 0

The set of divisors of can be expressed as . The divisor whose digits sum to the largest number is (which, having only one digit, sums to itself). Thus, we print as our answer.
*/

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int digSum(int div) {
    int i = div;
    int sum = 0;
    while(i) {
        sum += (i%10);
        i = i/10;
    }
    return sum;
}


int main(){
    int n;
    cin >> n;
    int best = 0, best_sum = 0;
    for(int i = 1; i <= ceil(n/2); i++) {
        if(n % i == 0) {
            int sum = digSum(i);
            if(sum > best_sum) {
                best = i;
                best_sum = sum ;
            }
        }
    }

    if(digSum(n) > best_sum) best = n;
    cout<<best;
    return 0;
}
