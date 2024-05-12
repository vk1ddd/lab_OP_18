//
// Created by ivanu on 11.05.2024.
//

#ifndef PROJECT_GETIDENTICALSTRINGINSIZE_H
#define PROJECT_GETIDENTICALSTRINGINSIZE_H

void getIdenticalStringInSize(char *s1, char *s2, size_t n1, size_t n2){
    BagOfWords minS;
    BagOfWords maxS;

    size_t min;
    char *rec;
    if (n1 >= n2){
        rec = getEndOfString(s2);
        getBagOfWords(&maxS, s1);
        getBagOfWords(&minS, s2);
        min = n2;
    }else{
        rec = getEndOfString(s1);
        getBagOfWords(&maxS, s2);
        getBagOfWords(&minS, s1);
        min = n1;
    }

    for (size_t i = min; i < maxS.size; i++){
        rec = copy(maxS.words[i].begin, maxS.words[i].end, rec);
        *rec = ' ';
        rec++;
    }

    *rec = '\0';
}

void test1_getIdenticalStringInSize_empty(){
    char a1[] = "";
    char a2[] = "";
    size_t n1 = 0;
    size_t n2 = 0;
    getIdenticalStringInSize(a1, a2, n1, n2);
    ASSERT_STRING(a1, "");
    ASSERT_STRING(a2, "");
}

void test2_getIdenticalStringInSize_s1Full_s2Empty(){
    char a1[] = "hello world";
    char a2[] = "";
    size_t n1 = 2;
    size_t n2 = 0;
    getIdenticalStringInSize(a1, a2, n1, n2);
    //ASSERT_STRING(a1, "hello world");
    ASSERT_STRING(a2, "hello world ");
}

void test3_getIdenticalStringInSize_s1Empty_s2Full(){
    char a1[] = "";
    char a2[] = "hello world";
    size_t n1 = 0;
    size_t n2 = 2;
    getIdenticalStringInSize(a1, a2, n1, n2);
    ASSERT_STRING(a1, "hello world ");
    ASSERT_STRING(a2, "hello world");
}

void test4_getIdenticalStringInSize_s1Full_s2Full(){
    char a1[] = "hello world";
    char a2[] = "hello world";
    size_t n1 = 2;
    size_t n2 = 2;
    getIdenticalStringInSize(a1, a2, n1, n2);
    ASSERT_STRING(a1, "hello world");
    ASSERT_STRING(a2, "hello world");
}

void tests_getIdenticalStringInSize(){
    test1_getIdenticalStringInSize_empty();
    test2_getIdenticalStringInSize_s1Full_s2Empty();
    test3_getIdenticalStringInSize_s1Empty_s2Full();
    test4_getIdenticalStringInSize_s1Full_s2Full();
}

#endif //PROJECT_GETIDENTICALSTRINGINSIZE_H
