//Vector Sort 
/*
Input Format
The first line of the input contains  where  is the number of integers. The next line contains  integers.
Output Format
Print the integers in the sorted order one by one in a single line followed by a space.
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n, num; 
    vector <int> narray; 
    cin >> n;
    for(int i=0; i<n; ++i)
    {
        cin>>num; 
        narray.push_back(num);
    }
    sort(narray.begin(), narray.end());

    for(auto i= narray.begin(); i< narray.end(); ++i)
            cout<< *i <<" "; 
            
    return 0;
}

