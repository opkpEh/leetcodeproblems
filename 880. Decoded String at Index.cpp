#include <iostream>

int main()
{
      std::string input; // leet2code3
      int k;
      std::cin>>input;
      std::cin>>k;

      std::string output;
      for(int i=0;i<input.size();i++)
      {
            if(isdigit(input[i]))
            {
                  int times = input[i]-'0';
                  std::string temp = output;
                  for(int j=0;j<times-1;j++)
                  {
                        output += temp;
                  }
            }
            else
            {
                  output += input[i];
            }
      }
      std::cout<<output[k-1];
      

      return 0;
}