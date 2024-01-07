#include <stdio.h>

int main() {
    int score = 0;
    int totalQuestions = 5; // Change the number of questions as needed

    // Question 1
    printf("Question 1\nWhat is the capital of India?\n");
    printf("a) Mumbai\nb) Delhi\nc) Kolkata\nd) hyderabad\n");
    char answer1;
    scanf("%c", &answer1);
    if (answer1 == 'b' || answer1 == 'B') {
        score++;
    }

    // Question 2
    printf("\nQuestion 2\nWhich programming language is this quiz written in?\n");
    printf("a) Java\nb) Python\nc) C\nd) JavaScript\n");
    char answer2;
    scanf(" %c", &answer2);
    if (answer2 == 'c' || answer2 == 'C') {
        score++;
    }

    // Question 3
    printf("\nQuestion 3\nWhat is the result of 5 + 7?\n");
    printf("a) 10\nb) 11\nc) 12\nd) 13\n");
    char answer3;
    scanf(" %c", &answer3);
    if (answer3 == 'c' || answer3 == 'C') {
        score++;
    }

    printf("\nQueshion 4\n What is the multiplication of 15x10?\n");
    printf("a) 155\nb) 145\nc) 1500\nd) 150\n");
    // Displaying the final score
    char answer4;
    scanf(" %c",&answer4);
    if (answer4=='d'|| answer4=='D')
    {
        score++;
    }

    printf("\nQueshion 5\nWhat is the size of Terabyte(TB)?\n");
    printf("a) 1024 GB\nb) 1000 GB\nc) 1200 GB\nd) 1275 GB\n");
    char answer5;
    scanf(" %c",&answer5);
    if(answer5=='a'||answer5=='A')
    {
        score++;
    }

    printf("\nQuiz completed! Your score is %d out of %d.\n", score, totalQuestions);

    return 0;
}
