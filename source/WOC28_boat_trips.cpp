/*
Alice owns a company that transports tour groups between two islands. She has n trips booked, and each trip pi has passengers.
 Alice has m boats for transporting people, and each boat's maximum capacity is c passengers.

Given the number of passengers going on each trip, determine whether or not Alice can perform all n trips using
no more than m boats per individual trip. If this is possible, print Yes; otherwise, print No.

Input Format

The first line contains three space-separated integers describing the respective values of n (number of trips), c (boat capacity),
 and m (total number of boats).
The second line contains n space-separated integers describing the values of .


Output Format

Print Yes if Alice can perform all booked trips using no more than boats per trip; otherwise, print No.

Sample Input 0

5 2 2
1 2 1 4 3

Sample Output 0

Yes
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
string isPossible(vector<int> passenger, int trips, int trip_max) {
    for(int i = 0; i < trips; i++) {
        if (passenger[i] > trip_max) return "No";
    }

    return "Yes" ;
}


int main(){
    int n;
    int c;
    int m;
    cin >> n >> c >> m;
    int trip_max = m*c;
    vector<int> p(n);
    for(int p_i = 0; p_i < n; p_i++){
       cin >> p[p_i];
    }

    cout << isPossible(p, n, trip_max) << endl;
    return 0;
}
