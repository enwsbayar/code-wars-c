/*
The first input array is the key to the correct answers to an exam, like ["a", "a", "b", "d"].
The second one contains a student's submitted answers.

The two arrays are not empty and are the same length.
Return the score for this array of answers, giving +4 for each correct answer,
-1 for each incorrect answer, and +0 for each blank answer, represented as an empty string
(in C the space character is used).
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int checkExam(const char*,const char* );

int main( )
{
    char student[4] = {'a','b',' ','d'};
    char answers[4] = {'a','c','d','d'};
    printf("%d",checkExam(student,answers));

    return 0;
}

int checkExam(const char* student,const char* answers)
{
    int score = 0;
    int length = 0;
    while (student[length] != '\0')
    {
        if (student[length] != ' ')
        {
            if (student[length] == answers[length])
            {
                score += 4;
            } else {
                score--;
            }
        }
        length++;
    }
    return score < 0 ? 0 : score; 
}