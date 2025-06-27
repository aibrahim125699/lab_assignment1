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

char* reverseString(char* str){
	int length = 0;
	while (str[length] != '\0') {
		length++;
	}
	char* reversed = new char[length+1];
	reversed[length+1]='\0';

	int i = 0;
	for (int i = 0; i < length; i++) {
		reversed[i] = str[length - 1 - i];
	}
	return reversed;
}

bool isPalindrome(char* str) {
	if (*str == *reverseString(str)) {
		return true;
	}
	else {
		return false;
	}
}

int substringCount(const char* str, const char* substr) {
	int count = 0;
	
	int sub_length = 0;
	while (substr[sub_length] != '\0') {
		sub_length++;
	}

	int length = 0;
	while (str[length] != '\0') {
		length++;
	}

	int sub_counter = 0;
	for (int i = 0; i < length; i++) {
		if (str[i]==substr[sub_counter]) {
			int k = i;
			int l = 0;
			while (str[k] != '\0' && str[l]!= '\0' && str[k]==substr[l]) {
				k++;
				l++;
			}
			if (l==sub_length) {
				count++;
			}
		}
	}
	return count;
}
