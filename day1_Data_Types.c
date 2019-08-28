#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    // Declare second integer, double, and String variables.
    int I;
    double D;
    char S[50];
    // Read and save an integer, double, and String to your variables.
    scanf("%d",&I);
    scanf("%lf",&D);
    fflush(stdin);
    gets(S);
    // Print the sum of both integer variables on a new line.
    printf("%d\n",i+I);
    // Print the sum of the double variables on a new line.
    printf("%0.1lf\n",d+D);
    // Concatenate and print the String variables on a new line
    for (int n=0;s[n]!='\0';n++)
        printf("%c",s[n]);

        puts(S);
    // The 's' variable above should be printed first.

    return 0;
}
