#include <iostream>
#include "text_utility.h"
using namespace std;

int main() {
    char str1[] = "CS lab";
    char str2[] = " seCtion 1 ";
    char emptyStr[] = "";
    char specialStr[] = "!@#$%^&*()32[]";

    char upperTest[] = "lowerCASE text";
    char lowerTest[] = "UPPERcase TEXT";

    cout << "Word count tests:" << endl;
    cout << "Text:  " << str1 << " : " << wordCount(str1) << " words" << endl;
    cout << "Text:  " << str2 << " : " << wordCount(str2) << " words" << endl;
    cout << "Text:  " << wordCount(emptyStr) << " words" << endl;
    cout << "Text:  " << specialStr << " : " << wordCount(specialStr) << " words" << endl << endl;


    cout << "Character count tests:" << endl;
    cout << "Text: " << str1 << " : " << charCount(str1) << " characters" << endl;
    cout << "Text: " << charCount(emptyStr) << " characters" << endl << endl;


    cout << "Uppercase conversion:" << endl;
    cout << "Before: " << upperTest << endl;
    toUpperCase(upperTest);
    cout << "After:  " << upperTest << endl << endl;


    cout << "Lowercase conversion:" << endl;
    cout << "Before: " << lowerTest << endl;
    toLowerCase(lowerTest);
    cout << "After:  " << lowerTest << endl;

    return 0;
}
