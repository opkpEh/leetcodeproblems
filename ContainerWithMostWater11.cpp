#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
	int maxArea(vector<int> &height)
	{
		int mid=0, p1, p2, vol=0, bar1, bar2;
		if(height.size()%2!=0)
		{
			mid=height[(((height.size()+1)/2)-1)];
			
			p1= mid;
			p2= mid+1;

			while(p1>=0 && p2<=height.size())
			{
				bar1= height[p1];
				bar2= height[p2];

				if(height[p1]>height[p2])
				{
					bar1= height[p2];
					bar2= height[p2];				
				}

				if(height[p2]>height[p1])
				{
					bar1= height[p1];
					bar2= height[p1];
				}

				if(vol<=bar1*bar2)
				{
					vol= bar1*bar2;
				}	
				p1--;
				p2++;
			}

	
		}
		else
		{
			mid=height[height.size()/2];
		}
	
		return vol;
		
	}
};

int main()
{
	Solution sol;
	
	vector <int> input= {1,8,6,2,5,4,8,3,7};
	cout<<sol.maxArea(input);


	return 0;
}
