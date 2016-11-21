/*
WOMEN HACKATHON 2

url : https://www.hackerrank.com/contests/womens-codesprint-2/challenges/electronics-shop

Monica wants to buy one keyboard and one USB drive from her favorite electronics store. The store sells different brands of keyboards and different brands of USB drives. Monica has exactly dollars to spend, and she wants to spend as much of it as possible (i.e., the total cost of her purchase must be maximal).

Given the price lists for the store's keyboards and USB drives, find and print the amount money Monica will spend. If she doesn't have enough money to buy one keyboard and one USB drive, print -1 instead.

Note: She will never buy more than one keyboard and one USB drive even if she has the leftover money to do so.

Input Format

The first line contains three space-separated integers describing the respective values of (the amount of money Monica has), (the number of keyboard brands) and (the number of USB drive brands).
The second line contains space-separated integers denoting the prices of each keyboard brand.
The third line contains space-separated integers denoting the prices of each USB drive brand.

Constraints

    The price of each item is in the inclusive range .

Output Format

Print a single integer denoting the amount of money Monica will spend. If she doesn't have enough money to buy one keyboard and one USB drive, print -1 instead.

Sample Input 0

10 2 3
3 1
5 2 8

Sample Output 0

9

Explanation 0

She can buy the keyboard and the USB drive for a total cost of .

Sample Input 1

5 1 1
4
5

Sample Output 1

-1

Explanation 1

There is no way to buy one keyboard and one USB drive because , so we print .

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


int main(){
    int s;
    int n;
    int m;
    cin >> s >> n >> m;
    vector<int> keyboards(n);
    for(int keyboards_i = 0;keyboards_i < n;keyboards_i++){
       cin >> keyboards[keyboards_i];
    }
    vector<int> pendrives(m);
    for(int pendrives_i = 0;pendrives_i < m;pendrives_i++){
       cin >> pendrives[pendrives_i];
    }
    return 0;
}
