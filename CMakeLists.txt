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
)

# описываем, что для запуска project потребуется сборка tasks
target_link_libraries(project str)
