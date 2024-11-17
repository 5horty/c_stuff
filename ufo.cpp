#include <iostream>
#include "ufo_functions.hpp"

int main() {
greet();
  std::string codeword = "rogan";
  std::string answer = "_____";
  int misses = 0;
  std::vector<char> incorrect;
  bool guess = false;
  char letter;

  while (answer != codeword && misses < 7){
    display_status(incorrect, answer);
    std::cout << "Please enter your guess: \n";
    std::cin >> letter;

    for (int i = 0; i < codeword.size();i++){
      if (letter == codeword[i]){
        answer[i] = letter;
        guess = true;
      }
    }
    if (guess){
      std::cout << "\nCorrect!\n";
    }else{
      std::cout << "\nIncorrect! The tractor beam pulls the person in further.\n";
      incorrect.push_back(letter);
      misses++;
    }
    guess= false;

    display_misses(misses);
  }
  end_game(answer,codeword);

}

