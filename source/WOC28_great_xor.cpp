/*
Given a long integer,x , count the number of values of a satisfying the following conditions:

1. a xor x > x
2. 0 < a < x
where a and x are long integers and is the bitwise XOR operator.

You are given q queries, and each query is in the form of a long integer denoting x.
For each query, print the total number of values of a satisfying the conditions above on a new line.

Input Format

The first line contains an integer,q , denoting the number of queries.
Each of the q subsequent lines contains a long integer describing the value of x for a query.


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
long countXor(long num) {
    int count = 0;
    long total = 0;

    while(num > 1) {
        if((num & 1) == 0) {
            total += pow(2.0, count);
            //cout << (num & 1) << " " << pow(2.0, count) << endl;
        }

        num >>= 1;
        count++;
    }
    return total;
}

int main(){
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        long x;
        cin >> x;
        cout << countXor(x) << endl;
    }
    return 0;
}
