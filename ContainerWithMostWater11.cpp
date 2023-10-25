#include <vector>
#include <iostream>

using namespace std;

class Solution
{
public: 
	int maxArea(std::vector<int> &height)
	{
	int p1=0, p2= height.size()-1;
	int waternow=0, vol=0 , width=0;

	while(p1<p2)
	{
		width= p2-p1;

		int b= min(height[p1], height[p2]);

		waternow = width * b;
		
		vol = max(vol, waternow);

		if(height[p1]<height[p2])
			p1++;
		else
			p2--;
	}
	return vol;
	}

};

int main()
{
      Solution s;

      std::vector<int> v= {1,8,6,2,5,4,8,3,7};

      cout<<s.maxArea(v);
      return 0;
}
