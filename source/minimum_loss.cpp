/*
WOMEN HACKATHON 2
url : https://www.hackerrank.com/contests/womens-codesprint-2/challenges/minimum-loss
Lauren has a chart of projected prices for a house over the next years, where the price of the house in the year is . She wants to purchase and resell the house at a minimal loss according to the following rules:

    The house cannot be sold at a price greater than or equal to the price it was purchased at (i.e., it must be resold at a loss).
    The house cannot be resold within the same year it was purchased.

Find and print the minimum amount of money Lauren must lose if she buys the house and resells it within the next years.

Note: It's guaranteed that a valid answer exists.

Input Format

The first line contains an integer, , denoting the number of years of house data.
The second line contains space-separated long integers describing the respective values of .

Constraints

    It's guaranteed that a valid answer exists.

Subtasks

    for of the maximum score.

Output Format

Print a single integer denoting the minimum amount of money Lauren must lose if she buys and resells the house within the next years.

Sample Input 0

3
5 10 3

Sample Output 0

2

Explanation 0

Lauren buys the house in year at price and sells it in year at for a minimal loss of .

Sample Input 1

5
20 7 8 2 5

Sample Output 1

2

Explanation 1

Lauren buys the house in year at price and sells it in year at for a minimal loss of .


SIDE NOTE:    There can be no O(n) solution
#define pf printf
#define sf scanf              *****************

using namespace std;

typedef long long vlong;    *****************

const vlong inf = 1000000000000000000LL;

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <limits.h>
#include <set>
using namespace std;


int main() {

    int n;
    vector<long long> input;
    set<long long> visited;
    long long result = 1<<20;
    cin>>n;
    for(int i = 0; i < n; i++) {
        long long temp;
        cin>>temp;
        input.push_back(temp);
    }

    long long max_element = max(input[0], 0LL);
    visited.insert(input[0]);
    for (int i = 1; i < n; i++) {
        if (input[i] < max_element) {
            long long closest_element = *visited.upper_bound(input[i]);
            long long loss = closest_element - input[i];
            result = min(loss, result);
        }
        visited.insert(input[i]);
        max_element = max(max_element, input[i]);
    }

    cout<<result;
    return 0;
}
