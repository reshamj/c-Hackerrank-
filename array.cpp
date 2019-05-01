#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int n, q,i, loc, ind, size, val; 
    cin >> n ;  
    cin >> q;
    vector <int> integers[n]; 
     
    for(i=0; i<n; i++)
    {
        cin>> size; 
        for(int j=0; j<size; j++)
        {
            cin>>val; 
            integers[i].push_back(val); 
        }
    }
    
    for(int k =1; k< q; k++){
        cin >>loc;
	cin >>ind;
        cout<< *(integers[loc].begin() + (ind)) <<endl; 
    }
    return 0;
}


