## Project Overview

This project is a text-utility for performing simple functions on C-Style strings (char[] or char\*). This project does NOT deal in manipulating instances of the String datatype (std::String). The project is modularized and compilation is managed using CMake and Make.

## Features 
1. Word count: returns the number of words in a string.
1. Character count: returns the number of characters in a string, excluding " " (whitespace characters).
1. Vowel and consonant count: returns the number of vowels and consonants within a string, respectively.
1. String reversal: returns a new string which consists of the input string but backwards.
1. Palindrome check: verifies if the original string is the same as the string reversed.
1. Case conversion to uppercase: converts all letters in a string to uppercase.
1. Case conversion to lowercase: converts all letters in a string to lowercase.
1. Substring occurrence count: counts the number of instances that a substring occurs within a string.
1. Vigenere Cipher encryption and decryption.

The code is also able to handle edge cases including NULL pointers, empty strings, and strings with only whitespace characters.
