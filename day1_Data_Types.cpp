#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    // Declare second integer, double, and String variables.
    int I;
    double D;
    string S;
    // Read and save an integer, double, and String to your variables.
    cin>>I;
    cin>>D;
    cin.get();
    getline(cin, S);
    // Print the sum of both integer variables on a new line.
    cout<<i+I<<endl;
    // Print the sum of the double variables on a new line.
    printf("%0.1lf\n",d+D);
    // Concatenate and print the String variables on a new line
    cout<<s+S;
    // The 's' variable above should be printed first.

    return 0;
}