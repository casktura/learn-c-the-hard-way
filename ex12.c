#include <stdio.h>

int main(int argc, char *argv[])
{
    int areas[] = {10, 12, 13, 14, 20};
    char name[] = "Zed";
    char full_name[] = {
        'Z', 'e', 'd',
        ' ', 'A', '.', ' ',
        'S', 'h', 'a', 'w', '\0'};

    // WARNING: On some systems you may have to change
    // %llu in this code to %ld since it will unsigned int
    printf("The size of an int: %llu\n", sizeof(int));
    printf("The size of areas (int[]): %llu\n", sizeof(areas));
    printf("The number of ints in areas: %llu\n", sizeof(areas) / sizeof(int));
    printf("The first area is %d, the 2nd %d.\n", areas[0], areas[1]);

    printf("The size of a char: %llu\n", sizeof(char));
    printf("The size of name (char[]): %llu\n", sizeof(name));
    printf("The number of chars: %llu\n", sizeof(name) / sizeof(char));

    printf("The size of full_name (char[]): %llu\n", sizeof(full_name));
    printf("The number of chars: %llu\n", sizeof(full_name) / sizeof(char));

    printf("name=\"%s\" and full_name=\"%s\"\n", name, full_name);

    return 0;
}
