/*hello
*/

#include <iostream>
#include <stdlib.h>
int main(){
srand (time(NULL));
  
int computer = rand() % 3 + 1;

int user = 0;

std::cout << "====================\n";
std::cout << "rock paper scissors!\n";
std::cout << "====================\n";

std::cout << "1) ✊\n";
std::cout << "2) ✋\n";
std::cout << "3) ✌️\n";

std::cout << "shoot! ";
std::cin >> user;

if (user == computer) {
    std::cout << "Tie\n";
} else if (user == 1 && computer == 3) {
    std::cout << "you win\n";
} else if (user == 2 && computer == 1) {
    std::cout << "you win\n";
} else if (user == 3 && computer == 2) {
    std::cout << "you win\n";
} else {
    std::cout << "you lose\n";
}

std::cout << "computer went " << computer << "\n";
}
