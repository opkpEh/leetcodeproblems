#include <iostream>
#include <vector>
using namespace std;

class Solution
{
  public:
      int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        
        int answer= 0;
        for(int i = 0; i< hours.size(); i++)
        {
          if(hours[i]>target)
          {
            answer++;
          }
        }
      return answer;
    }
  };
