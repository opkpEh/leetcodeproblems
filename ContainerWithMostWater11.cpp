#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Solution
{
public: 
	int maxArea(std::vector<int> &height)
	{
	int p1, p2= height.size(), waternow , vol=0, b , width;

	while(p1<p2)
	{
		width= p2-p1;

		b= min(height[p1], height[p2]);

		waternow = width * b;
		
		vol = max(waternow, vol);

		if(height[p1]>height[p2])
			p1++;
		else
			p2--;
	}
	return vol;
	}

};

int main()
{
	Solution sol;
	vector<int> test= {1,8,6,2,5,4,8,3,7}; 
	
	cout<<"working"<<endl;
	cout<<sol.maxArea(test);

	return 0;

}
