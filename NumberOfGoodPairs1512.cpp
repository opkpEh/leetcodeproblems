1#include <iostream>
#include <vector>

int main()
{
	int arr[5]= {2,4,2,4,5};

       	int count=0;
  
        for(int i=0; i<arr.size(); i++)
        {
       		for(int j=0; j<i; j++)
                {
        		if(arr[i]==arr[j])
                       	{
                        	count++;
			}
               	}
       	}
	std::cout<<count;

	return 0;
}
