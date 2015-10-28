#include <stdio.h>

int main(int argc, char *argv[]){

	int numbers[4] = {1};
	// backslash can be used with a single character, a octal digits or a hexadecimal.
	char name[4] = {'\0', '\0', 'a', 'b'};
	char name2[] = "Zed";

	printf("numbers: %d %d %d %d \n", !numbers[0], !numbers[1], numbers[2], numbers[3]);
	printf("name: %d%d%d%d\n", name[0], name[1], name[2], (int)name[3]);
	printf("name2: %d\n", !name2[0]);

	return 0;

}
