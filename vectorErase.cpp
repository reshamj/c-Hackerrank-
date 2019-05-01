#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/*
Input Format

The first line of the input contains an integer .The next line contains  space separated integers(1-based index).The third line contains a single integer ,denoting the position of an element that should be removed from the vector.The fourth line contains two integers  and  denoting the range that should be erased from the vector inclusive of a and exclusive of b.


Output Format

Print the size of the vector in the first line and the elements of the vector after the two erase operations in the second line separated by space.

*/

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size, num; 
    int erraseLoc, startRange, endRange;
    cin>> size; 
    vector<int> integers; 
    for(int i=0; i<size; ++i)
    {
        cin>>num; 
        integers.push_back(num);
    }
    cin>> erraseLoc; 
    integers.erase(integers.begin()+ erraseLoc-1);

    cin>> startRange >> endRange; 
    integers.erase(integers.begin()+ startRange-1, integers.begin()+endRange-1);

    cout<<integers.size()<<endl; 
    for(auto i=integers.begin(); i< integers.end(); ++i)
            cout<< *i<< " ";
    return 0;
}

