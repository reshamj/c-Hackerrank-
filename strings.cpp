#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
     
    // return a vector of int type 
    vector <int> integers;
    //do the string to int parsing here 
    int i;
    char ch; 
    istringstream istring;
    istring.str(str);
    while (istring >> i)
	{
	   integers.push_back(i); 
           istring >> ch; 
	}
    return integers; 
}

int main() {

    string str;
    cin >> str;

    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}


