#include <iostream>
#include <ctime>

void PlayGameAtDifficulty(int difficulty)
{
  std::cout << "You are a new developer working on building a LEVEL " << difficulty << " video game.\n";
  std::cout << "You get an unknown error with cryptic instructions on how to solve the error.\n";

  srand(time(NULL)); // Create new random sequence based on time of day
  const int a = rand() % difficulty + difficulty;
  const int b = rand() % difficulty + difficulty;
  const int c = rand() % difficulty + difficulty;

  const int sum = a + b + c;
  const int product = a * b * c;

  std::cout << std::endl;
  std::cout << "* There are three numbers in the code\n";
  std::cout << "* The codes multiply to give " << product << std::endl;
  std::cout << "* The codes add-up to " << sum << std::endl;

  std::cout << std::endl;
  std::cout << "Enter the three code numbers followed by x\n";
  std::cout << std::endl;

  int answer;
  int trialSum = 0;
  int trialProduct = 1; // Note required starting product

  // Process the numbers in the input
  while(std::cin >> answer)
  {
    trialSum += answer;
    trialProduct *= answer;
  }

  std::cout << std::endl;
  if (trialSum == sum && trialProduct == product)
  {
    std::cout << "CONGRATULATIONS, YOU'RE FIXED THE BUG. Now onto the next one...\n";
    std::cout << "==============================================================\n";
  }
  else
  {
    std::cout << "BOOM :-( that wasn't the answer. Let's keep working on this mf bug.\n";
  }

}

int main()
{
  int difficulty = 2;
  int maxDifficulty = 10;
  
  while(difficulty <= maxDifficulty)
  {
    PlayGameAtDifficulty(difficulty);
    std::cin.clear(); // Clears the failbit
    std::cin.ignore(); // Discards the buffer
    ++difficulty;
  }

  std::cout << "WOW - You're a master hacker!\n";
  return 0; // Exit with no error code
}