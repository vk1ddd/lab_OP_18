cmake_minimum_required(VERSION 3.26)
project(project C)
set(CMAKE_C_STANDARD 11)

#  определение  точки  входа.  Будет  запущен  файл  main.c.
#  указывается  произвольная  метка,  в  данном  случае  -  project
add_executable(project main.c)

#  создаём  библиотеку
add_library(str string/string_.h string/string_.c
        string/tasks/removeNonLetters.h
        string/tasks/removeExtraSpaces.h
        string/tasks/reverseDigitsWithWords.h
        string/tasks/replaceDigitsToSpace.h
        string/tasks/replaceWord.h
        string/tasks/lexicographicallyCorrect.h
        string/tasks/reversePrint.h
        string/tasks/numberOfPalindromes.h
        string/tasks/combiningStrings.h
        string/tasks/reverseString.h
        string/tasks/wordBeforeFirstWordWithA.h
        string/tasks/lastWordInFirstStringInSecondString.h
        string/tasks/isEqualWordsInString.h
        string/tasks/areThereAnyWordsFromTheSameSetOfLetters.h
        string/tasks/stringWithoutWordsEqualLastWord.h
        string/tasks/getWordBeforeWordThatInSecondLine.h
        string/tasks/removePalindromes.h
        string/tasks/getIdenticalStringInSize.h
        string/tasks/lettersBelongString.h
)

# описываем, что для запуска project потребуется сборка tasks
target_link_libraries(project str)
