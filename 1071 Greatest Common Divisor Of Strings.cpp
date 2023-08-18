#include<iostream>
#include <string>
#include "algorithm"


using namespace std;

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
      cout<< __gcd(size(str1), size(str2));
      return (str1 + str2 == str2 + str1) ? str1.substr(0, __gcd(size(str1),size(str2))): "";
    }  



};
int main(){
    Solution test_run;

    cout<<test_run.gcdOfStrings("ABCABC","ABC")<<endl;

    return 0;
}
