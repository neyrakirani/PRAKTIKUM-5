#include <ctype.h>
#include <stdio.h>

int main() {
	char sentence[1000];
	int vowels = 0;
	int consonants = 0;

	printf("Kalimat : ");
	if (fgets(sentence, sizeof(sentence), stdin) == NULL) {
		return 1;
	}

	for (int i = 0; sentence[i] != '\0'; i++) {
		unsigned char character = (unsigned char)sentence[i];
		if (isalpha(character)) {
			character = (unsigned char)tolower(character);
			if (character == 'a' || character == 'i' || character == 'u' ||
				character == 'e' || character == 'o') {
				vowels++;
			} else {
				consonants++;
			}
		}
	}

	printf("Jumlah Vokal : %d\n", vowels);
	printf("Jumlah Konsonan : %d\n", consonants);
	return 0;
}
