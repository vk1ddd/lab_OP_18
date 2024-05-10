#include "string/tasks/removeNonLetters.h"
#include "string/tasks/removeExtraSpaces.h"
#include "string/tasks/reverseDigitsWithWords.h"
#include "string/tasks/replaceDigitsToSpace.h"
#include "string/tasks/replaceWord.h"
#include "string/tasks/lexicographicallyCorrect.h"
#include "string/tasks/reversePrint.h"
#include "string/tasks/numberOfPalindromes.h"
#include "string/tasks/combiningStrings.h"
#include "string/tasks/reverseString.h"

int main(void) {
    tests_removeNonLetters();
    tests_removeExtraSpaces();
    tests_reverseDigitsWithWords();
    tests_replaceDigitsToSpace();
    tests_replaceWord();
    tests_lexicographicallyCorrect();
    tests_reversePrint();
    tests_numberOfPalindromes();
    tests_combiningStrings();
    tests_reverseString();

    return 0;
}
