#include <stdio.h>

int main(int argc, char *argv[])
{
    int numbers[4] = {0}, numbers2[4]={0};
    char name[4] = {'a'}, charArr[]="\0\0\0a"; // equals to 97

    // first, print them out raw
    printf("numbers: %d %d %d %d\n",
            numbers[0], numbers[1],
            numbers[2], numbers[3]);

    printf("name each: %c %c %c %c\n",
            name[0], name[1],
            name[2], name[3]);

    printf("name: %s\n", name);

    // setup the numbers
    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
    numbers[3] = 4;

	// Assign the characters into numbers and then use printf to print them a character at a time.
	// What kind of compiler warnings did you get?
	numbers2[0] = 'a';
    numbers2[1] = 'a';
    numbers2[2] = 'a';
    numbers2[3] = 97;

    // setup the name
    name[0] = 'Z';
    name[1] = 'e';
    name[2] = 'd';
		// backslash can be used with a single character, a octal digits or a hexadecimal.
    name[3] = '\0';

    // then print them out initialized
    printf("numbers: %d %d %d %d\n",
            numbers[0], numbers[1],
            numbers[2], numbers[3]);

	printf("Print numbers2 as decimals: %d %d %d %d\n",
            numbers2[0], numbers2[1],
            numbers2[2], numbers2[3]);

    printf("Print numbers2 as characters: %c %c %c %c\n",
            numbers2[0], numbers2[1],
            numbers2[2], numbers2[3]);

    printf("Print 0 as character: %c\n", 0);

    printf("name each: %c %c %c %c\n",
            name[0], name[1],
            name[2], name[3]);

    // print the name like a string
    printf("name: %s\n", name);

    // another way to use name
    char *another = "Zed";

    printf("another: %s\n", another);

    printf("another each: %c %c %c %c\n",
            another[0], another[1],
            another[2], another[3]);

		// If an array of characters is 4 bytes long, and an integer is 4 bytes long,
		// then can you treat the whole name array like it's just an integer?
		// How might you accomplish this crazy hack?
		int numberOutput = (charArr[0] << 24) + (charArr[1] << 16) + (charArr[2] << 8) + charArr[3];
		printf("NumberOutput: %d", numberOutput);
    return 0;
}
