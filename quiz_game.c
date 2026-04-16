#include <stdio.h>

int main() {

    int score = 0;
    int answer;

    printf("===== Welcome to the Quiz Game =====\n");

    // Question 1
    printf("\n1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 2) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! Correct answer is Delhi.\n");
    }

    // Question 2
    printf("\n2. Which language is used for system programming?\n");
    printf("1. Python\n2. Java\n3. C\n4. HTML\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 3) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! Correct answer is C.\n");
    }

    // Question 3
    printf("\n3. Who is known as the father of C language?\n");
    printf("1. Dennis Ritchie\n2. James Gosling\n3. Bjarne Stroustrup\n4. Guido van Rossum\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 1) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! Correct answer is Dennis Ritchie.\n");
    }

    printf("\n===== Quiz Finished =====\n");
    printf("Your Score: %d / 3\n", score);

    if(score == 3)
        printf("Excellent!\n");
    else if(score == 2)
        printf("Good Job!\n");
    else
        printf("Better luck next time.\n");

    return 0;
}
