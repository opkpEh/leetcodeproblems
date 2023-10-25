#include <string.h>
#include <iostream>

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {

			int count=0;
		
			for(auto s:operations)
			{

				if(s[1]=='+')
				{
					count++;
				}

				else
				{
					count--;
    		}

			}

		return count;
		}
};
