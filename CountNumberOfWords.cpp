#include <iostream>
#include <string>


int main() 
{
    std::string str;
    std::cout << "Enter the string: ";
    std::getline(std::cin, str);

    int count = 0;
    bool inWord = false; 

    for (int i = 0; i < str.length(); i++) 
      {
      if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') 
      {
            inWord = false;
      }

      else if (!inWord) 
      {
            count++;
            inWord = true;
      }
        
    }

    std::cout << "The number of words in the string are: " << count << std::endl;

    return 0;
}
