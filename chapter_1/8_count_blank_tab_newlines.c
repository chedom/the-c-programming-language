#include <stdio.h>

int main() {
    int blanks_count, tabs_count, newlines_count;
    blanks_count = 0;
    tabs_count = 0;
    newlines_count = 0;
    
    int c;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ') {
            ++blanks_count;
        } else if (c == '\t') {
            ++tabs_count;
        } else if (c == '\n') {
            ++newlines_count;
        }
    }

    printf("blanks: %d, tabs: %d, new lines: %d\n", blanks_count, tabs_count, newlines_count);
    

    return 0;
}