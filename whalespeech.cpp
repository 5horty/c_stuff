#include <iostream>
#include <iostream>
#include <string>
#include <vector>

int main(){

  std::string input = "turpentine and turtles";

  std::vector<char> vowels = {'a','e','i','o','u'};
  std::vector<char> result; 


  for (int i = 0; i < input.size();i++){
    for (int j = 0; j < vowels.size();j++){
      if (input[i] == vowels[j]){
        result.push_back(input[i]);
      }
      }
      if (input[i] == 'e' || input[i] == 'u' ){

        result.push_back(input[i]);
      }

    }
  for (int t = 0; t < result.size();t++){
   
    std::cout << result[t] << "\n";
  }
