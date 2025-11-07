#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	const char* response[] = {
		"You too, idiot!",
		"At least i can compile.",
		"...Says the person who doesn't know how to use the last command.",
		"Right back at you!",
		"Is this 'cause you were dropped as a baby?",
		"Woah, who ran you.Brain:Destroy()?",
		"You're like that one corner of the sandwich that has no filling."
	};
	srand((unsigned int)time(NULL));
	printf("%s\n", response[rand() % 7]);
	return 0;
}
