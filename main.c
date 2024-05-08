#include "string/tasks/removeNonLetters.h"
#include "string/tasks/removeExtraSpaces.h"
#include "string/tasks/reverseDigitsWithWords.h"
#include "string/tasks/replaceDigitsToSpace.h"
#include "string/tasks/replaceWord.h"

int main(void) {
    tests_removeNonLetters();
    tests_removeExtraSpaces();
    tests_reverseDigitsWithWords();
    tests_replaceDigitsToSpace();
    tests_replaceWord();

    return 0;
}
