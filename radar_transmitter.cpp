/*
Hackerland is a one-dimensional city with houses, where each house is located at some on the -axis. The Mayor wants to install radio transmitters on the roofs of the city's houses. Each transmitter has a range, , meaning it can transmit a signal to all houses units of distance away.

Given a map of Hackerland and the value of , can you find and print the minimum number of transmitters needed to cover every house in the city? (Every house must be covered by at least one transmitter) Each transmitter must be installed on top of an existing house.

Input Format

The first line contains two space-separated integers describing the respective values of (the number of houses in Hackerland) and (the range of each transmitter).
The second line contains space-separated integers describing the respective locations of each house (i.e., ).

Constraints

    There may be more than one house at the same location.

Subtasks

    for of the maximum score.

Output Format

Print a single integer denoting the minimum number of transmitters needed to cover all the houses.

Sample Input 0

5 1
1 2 3 4 5

Sample Output 0

2

Explanation 0

The diagram below depicts our map of Hackerland:

k-nearest(2).png

We can cover the entire city by installing transmitters on houses at locations and . Thus, we print on a new line.

Sample Input 1

8 2
7 2 4 6 5 9 12 11

Sample Output 1

3

Explanation 1

The diagram below depicts our map of Hackerland:

k-nearest2(2).png

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

int main() {
    string input,ele;
    int n,range;
    int counter = 0;
    vector<int> house;
    cin>>n>>range;
    int full_range = 2*range;

    getline(cin,input);
    stringstream ss(input);

    while(getline(ss,ele,' ')){
       house.push_back(stoi(ele));
    }

    sort(house.begin(), house.end());

    int stop_point = house[0];
    for(int i = 1; i < n; i++) {
        if ( (house[i] - stop_point) < full_range) {continue;}
        else {
            if ( (house[i] - stop_point) == full_range)
                stop_point = house[i];
            else
            {
                stop_point = house[i-1] + (full_range - (house[i-1] - stop_point));
                i -- ;
            }
            counter = counter + 1;
        }
    }
    
    if (house[n-1] - stop_point != full_range) counter++;
    cout<<counter;

    return 0;
}
