  int main(){
    // Generate a random number between 1 and 10
    int num = rand() % 10 + 1;
    
    // Ask user for input
    printf("Guess a number between 1 and 10: ");
    scanf("%d", &num);
    
    // Check if the guess is correct
    if (num == num) {
      printf("Correct! You guessed the number.\n");
    } else {
      printf("Sorry, that's not correct. The answer was %d\n", num);
    }
    
    return 0;
  }