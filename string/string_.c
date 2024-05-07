//
// Created by ivanu on 13.04.2024.
//
#include <ctype.h>
#include "string_.h"
#include <stdio.h>

char _stringBuffer[MAX_STRING_SIZE + 1];

size_t strlen_(const char *begin) {
    char *end = begin;

    while (*end != '\0')
        end++;

    return end - begin;
}

char *find(char *begin, char *end, int ch) {
    while (begin != end && *begin != ch)
        begin++;

    return begin;
}

char *findNonSpace(char *begin) {
    while (*begin != '\0') {
        if (!isspace(*begin))
            return begin;

        begin++;
    }

    return begin;
}

char *findSpace(char *begin) {
    while (*begin != '\0') {
        if (isspace(*begin))
            return begin;

        begin++;
    }

    return begin;
}

char *findNonSpaceReverse(char *rbegin, const char *rend) {
    while (rbegin != rend) {
        if (!isspace(*rbegin))
            return rbegin;

        rbegin--;
    }

    return rbegin;
}

char *findSpaceReverse(char *rbegin, const char *rend) {
    while (rbegin != rend) {
        if (isspace(*rbegin))
            return rbegin;

        rbegin--;
    }

    return rbegin;
}

int strcmp_(const char *lhs, const char *rhs) {
    while (*lhs != '\0' && *rhs != '\0' && *lhs == *rhs) {
        lhs++;
        rhs++;
    }

    return *lhs - *rhs;
}

char *copy(const char *beginSource, const char *endSource, char *beginDestination) {
    while (beginSource != endSource) {
        *beginDestination = *beginSource;
        ++beginSource;
        ++beginDestination;
    }

    return beginDestination + (endSource - beginSource);
}

char *copyIf(const char *beginSource, const char *endSource, char *beginDestination, int (*f)(int)) {
    while (beginSource != endSource) {
        if (f(*beginSource)) {
            *beginDestination = *beginSource;
            beginDestination++;
        }

        beginSource++;
    }

    return beginDestination;
}


char *copyIfReverse(const char *rbeginSource, const char *beginSource, char *beginDestination, int (*f)(int)) {
    while (rbeginSource != beginSource) {
        if (f(*rbeginSource)) {
            *beginDestination = *rbeginSource;
            beginDestination++;
        }

        rbeginSource--;
    }

    return beginDestination;
}

void assertString(const char *expected, char *got,
                  char const *fileName, char const *funcName,
                  int line) {
    if (strcmp_(expected, got)) {
        fprintf(stderr, "File  %s\n", fileName);
        fprintf(stderr, "%s  -  failed  on  line  %d\n", funcName, line);
        fprintf(stderr, "Expected:  \"%s\"\n", expected);
        fprintf(stderr, "Got:  \"%s\"\n\n", got);
    } else
        fprintf(stderr, "%s  -  OK\n", funcName);
}

char *getEndOfString(char *s) {
    char *start = s;
    while (*start != '\0')
        start++;

    return start;
}

int getWord(char *beginSearch, WordDescriptor *word) {
    word->begin = findNonSpace(beginSearch);

    if (*word->begin == '\0')
        return 0;

    word->end = findSpace(word->begin);

    return 1;
}

bool getWordReverse(char *rbegin, char *rend, WordDescriptor *word) {
    word->begin = findNonSpaceReverse(rbegin, rend);

    if (word->begin == rend)
        return 0;

    word->end = findSpaceReverse(word->begin, rend);

    return 1;
}
