//it roick,paper,scissors
#include<iostream>
#include<stdlib.h>

int main(){
srand(time(NULL));

int computer = rand() %3  +1;

int user = 0;

std::cout << "====================\n";
std::cout << "rock paper scissors!\n";
std::cout << "====================\n";

std::cout << "1) ✊\n";
std::cout << "2) ✋\n";
std::cout << "3) ✌️\n";

std::cout << "shoot! ";

std::cin >> user;

if(computer == user){
  std::cout << "it a tie, you both choose the same thing\n";
  }
else if(computer == 1 && user == 3){
  std::cout << "Rock beats paper,you lose.\n";
}
else if(user == 1 && computer ==  3){
  std::cout << "Rock beats paper,you win.\n";
}
else if(computer == 2 && user == 1){
  std::cout << "Paper beats rock, you lose.\n";
}
else if(user == 2 && computer == 1){
  std::cout << "Paper beats rock,you win.\n";
}
else if(computer == 3 && user == 2){
  std::cout << "Scissor beats paper, you lose.\n";
}
else if(user == 2, computer == 3){
  std::cout << "Scissor beats paper, you win.\n";
}
else{
  std::cout << "Something went wrong.\n";
}

return 0;

}
