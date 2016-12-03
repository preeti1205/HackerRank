/*
There is a big music festival happening on Main street in Bytetown!
We can consider this street to be along an infinite number line where, at every point on the line, some genre of music playing.
 More precisely, there are points a0 to an-1 which are borders between different genres of music.
 So, at every point from - infinity to a0, the first genre of music is playing (say, Techno).
 At every point from to a0 to a1 the second genre of music is playing (say, Disco).
 This continues until the last genre of music (say, House), which is playing from an-1 to infinity.
  All coordinates are given in miles.

Conor wants to visit this event. He plans to walk exactly m miles at a constant speed of 1 mile per hour in the positive direction.
For each genre of music he passes, he wants to listen to it for a minimum of hmin hours (to determine whether he likes it or not) and
a a maximum of hmax hours (so he will not get bored).

Given n integers denoting the respective border points for each music genre and the values of m,hmin , and hmax
find and print an integer denoting the optimal location for Conor to start his walk through the festival such that
all of his above requirements are satisfied.

Input Format

The first line contains a single integer, n, denoting the number of border points.
The second line contains distinct space-separated integers describing the respective values of .
The third line contains three space-separated integers describing the respective values of , , and .

Constraints

    , all are pairwise different and given in increasing order.
    It's guaranteed that at least one solution exists.

Output Format

Print a single integer denoting the possible start point for Conor's walk. If there are several solutions, print any one of them.

Sample Input 0

2
1 3
7 2 3

Sample Output 0

-2

Explanation 0

If Conor starts at point -2, he will hear music in segment [-2,1] for 3 hours, segment[1,3] for 2 hours,
and segment [3,5] for his 2 last hours. Similarly, he could start walking at and still satisfy all of his conditions.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, m, hmin, hmax;
    int result = 0;
    vector<int> input;
    cin>> n;
    for(int i = 0; i < n; i++) {
        int a;
        cin>>a;
        input.push_back(a);
    }
    cin>>m>>hmin>>hmax;

    //result code
    result = input[0] - hmin;
    int dist_left = m - hmin;
    int i = 1;
    while(i < n) {
        if(dist_left <= 0) break;
        int diff = input[i] - input[i-1];
        if (diff <= hmax && diff >= hmin) dist_left -= diff ;
        else if (diff < hmin) {
            dist_left = m - hmin;
            result = input[i+1] - hmin;   //need to look at extra case when i+1 excceds limit
            while (result < input[i] && i < n) {
                i++ ;
                result = input[i+1] - hmin;
            }
            i++;
        }
        else if (diff > hmax) {
            dist_left = m - hmin;
            result = input[i] - hmin;
        }
       i++;
    }
    if (dist_left > hmax) result -= (hmax - hmin);
    cout<<result;
    return 0;
}
