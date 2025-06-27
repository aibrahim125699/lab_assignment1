#include "text_utility.h"
#include <cctype> 
#include <iostream>
using namespace std;

int wordCount(const char* str) {
    if (!str) return 0;
    int count = 0;
    bool inWord = false;
    for (int i = 0; str[i] != '\0'; ++i) {
        if (isspace(str[i])) {
            inWord = false;
        } else if (!inWord) {
            inWord = true;
            count++;
        }
    }
    return count;
}

int charCount(const char* str) {
    if (!str) return 0;
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }
    return count;
}

void toUpperCase(char* str) {
    if (!str) return;
    for (int i = 0; str[i] != '\0'; i++) {
        if (std::islower(str[i])) {
            str[i] = std::toupper(str[i]);
        }
    }
}

void toLowerCase(char* str) {
    if (!str) return;
    for (int i = 0; str[i] != '\0'; i++) {
        if (std::isupper(str[i])) {
            str[i] = std::tolower(str[i]);
        }
    }
}

bool isVowel(char str) {
	if (str == 'a' || str == 'e' || str == 'i' || str == 'o' || str == 'u') {
		return true;
	}
	else {
		return false;
	}
}

void vowelConsonantCount(const char* str) {
	int vowels = 0;
	int consonants = 0;
	for (int i=0; str[i] != '\0'; i++) {
		if (str[i] != ' ') {
			if (isVowel(str[i])) {
				vowels++;
			}
			else {
				consonants++;
			}
		}
	}
	cout << vowels << " vowel/s and " << consonants << " consonant/s" << endl;
}
