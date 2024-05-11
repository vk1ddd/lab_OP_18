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
#include "string/tasks/wordBeforeFirstWordWithA.h"
#include "string/tasks/lastWordInFirstStringInSecondString.h"
#include "string/tasks/isEqualWordsInString.h"
#include "string/tasks/areThereAnyWordsFromTheSameSetOfLetters.h"
#include "string/tasks/stringWithoutWordsEqualLastWord.h"
#include "string/tasks/getWordBeforeWordThatInSecondLine.h"
#include "string/tasks/removePalindromes.h"

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
    tests_wordBeforeFirstWordWithA();
    tests_lastWordInFirstStringInSecondString();
    tests_isEqualWordsInString();
    tests_areThereAnyWordsFromTheSameSetOfLetters();
    tests_stringWithoutWordsEqualLastWord();
    tests_getWordBeforeWordThatInSecondLine();
    tests_removePalindromes();

    return 0;
}
