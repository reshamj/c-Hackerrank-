#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

/*
1 x  : Add an element  to the set.
2 x  : Delete an element  from the set. (If the number  is not present in the set, then do nothing).
3 x  : If the number  is present in the set, then print "Yes"(without quotes) else print "No"(without quotes).

Input Format
The first line of the input contains Q where  Q is the number of queries. The next  lines contain  query each. Each query consists of two integers  and  where  is the type of the query and  is an integer.
Output Format

For queries of type  print "Yes"(without quotes) if the number  is present in the set and if the number is not present, then print "No"(without quotes).
Each query of type  should be printed in a new line.


*/
class setOperations{
    set<int> Set; 
    public:
            void insertX(int x);
            void deleteX(int x);
            void findX(int x, int count);  
            void printSet();      
};

void setOperations:: insertX(int x){
    Set.insert(x);
    //printSet();
}
void setOperations::deleteX(int x) {
    Set.erase(x);
    //printSet();
}
void setOperations :: findX(int x, int count){
   auto result = Set.find(x); 
   if (result != Set.end())
   {
       cout<<"Yes"<<endl;
   }
   else {
       cout<<"No"<<endl;
   }
}

void setOperations::printSet(){
  for (auto i : Set) {
    cout << i << ' ';
  }
  cout << endl ;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int count, queryType, value; 
    cin>> count; 
    setOperations sobject; 

    for(int i=0; i<count; ++i){
        cin>> queryType >>value;

        switch(queryType){
            case 1: {
                //Insert x/value
                sobject.insertX(value);            
            } break;
            case 2: {
                    sobject.deleteX(value);
            } break; 
            case 3: {
                sobject.findX(value, count);
            } break; 
            default: cout<<"wrong input"; 
            break; 
        }

    }
    return 0;
}




