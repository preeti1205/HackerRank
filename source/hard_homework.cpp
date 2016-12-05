/*
Aaron is struggling with trigonometric functions, so his teacher gave him extra homework. Given an integer,n ,
he must answer the following question:

    What is the maximum value of sin(x) + sin(y) + sin(z) where x, y and z are positive integers and ?

Help Aaron by finding this maximal value and printing it to a scale of decimal places.

Input Format

A single positive integer denoting n.

Constraints
3 <= n <= 3 * 10e7

Output Format

Print a single real number rounded to a scale of exactly 9 decimal places (e.g. 0.123456789 ) denoting the maximum possible value.

Sample Input 0

3

Sample Output 0

2.524412954

Explanation 0

The only possible variant is x=1 ,y=1 and z= 1 which gives us 2.524412954
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <ctgmath>
#include <iomanip>
#include <unordered_map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    double max_val = 0;
    int x = 0;
    unordered_map<int, double> sintable;
    vector<int> largest;
    cin>>n;
    double maxi = 0;
    for(int i = 1; i <= n-2; i++) {
        double sina = sin(i);
        sintable.insert(make_pair(i, sina));
        if (sina > maxi) {
            maxi = sina ;
            largest.push_back(i);
            //cout<<i<<" "<<std::fixed<<std::setprecision(9)<<sina<<endl;
        }
    }
    int size = largest.size();

    for(int i = 0; i < size; i++){
        x = largest[i];
        if (largest[i] >= n-2) {
            if (largest[i] > n-2) x = largest[i-1];
            break;
        }

    }
    //cout<<x<<endl;
    int sum = n - x;
    double result = 0;
    for(int i = 1; i <= sum/2; i++) {
        double sinsum = sintable[i] + sintable[sum - i];
        //cout<<sintable[i]<<" "<<sintable[sum-i]<<endl;
        result = max(result, sinsum);
        //cout<<result<<endl;
    }
    max_val = result + sintable[x];
    /*
    for(int i = 1; i <= n - 2; i++) {
        int sum = n - i;
        double sina = sintable[i];
        double result = 0;
        for (int j = 1; j <= int(sum/2) ; j++) {
            double sinsum = sintable[j] + sintable[sum - j];
            result = max(result ,sinsum);
        }
        max_val = max(max_val, result + sina);
        if(max_val == 3) break;
    }
    */
    //max_val = floor(max_val*1000000000)/1000000000 ;

    cout<<std::fixed<<std::setprecision(9)<<max_val;

    return 0;
}
