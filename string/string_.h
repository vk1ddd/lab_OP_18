//
// Created by ivanu on 13.04.2024.
//

#ifndef LAB_OP_17_STRING__H
#define LAB_OP_17_STRING__H

#include <stdlib.h>

#define ASSERT_STRING(expected, got) assertString(expected, got, __FILE__, __FUNCTION__, __LINE__)

typedef  struct  WordDescriptor  {
    char  *begin;  //  позиция  начала  слова
    char  *end;      //  позиция  первого  символа,  после  последнего  символа
}  WordDescriptor;

// возвращает кол-во символов
size_t strlen_(const char *begin);

//возвращает указатель на первый элемент с кодом ch
char *find(char *begin, char *end, int ch);

//возвращает указатель на первый символ, отличный от пробельных
char *findNonSpace(char *begin);

//возвращает указатель на первый пробельный символ
char *findSpace(char *begin);

//возвращает указатель на первый справа символ, отличный от пробельных
char *findNonSpaceReverse(char *rbegin, const char *rend);

//возвращает указатель на первый пробельный символ справа
char *findSpaceReverse(char *rbegin, const char *rend);

//возвращает равенство строк
int strcmp_(const char *lhs, const char *rhs);

//возвращает фрагмент памяти от beginSource до endSource
char *copy(const char *beginSource, const char *endSource, char *beginDestination);

//возвращает фрагмент памяти от beginSource до endSource, удовлетворяющий функции-предикату f
char *copyIf(const char *beginSource, const char *endSource, char *beginDestination, int (*f)(int));

//возвращает фрагмент памяти от rbeginSource до beginSource, удовлетворяющий функции-предикату f
char *copyIfReverse(const char *rbeginSource, const char *beginSource, char *beginDestination, int (*f)(int));

void assertString(const char* expected, char* got, char const* file_name, char const* func_name, int line);

char* getEndOfString(char* s);

int  getWord(char  *beginSearch,  WordDescriptor  *word);

#endif //LAB_OP_17_STRING__H
