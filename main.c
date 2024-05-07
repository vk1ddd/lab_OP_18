#include <stdio.h>
#include "string/tasks/removeNonLetters.h"
#include "string/tasks/removeExtraSpaces.h"
#include "string/tasks/getWordReverse.h"

int main(void) {
    tests_removeNonLetters();
    tests_removeExtraSpaces();
    tests_getWordReverse();

    return 0;
}
