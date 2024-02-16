#include <stdlib.h>

int mi_strlen (char* str)  {
    int len = 0;
    const char* temp = str;

    while(*temp != '\0') {
        len++;
        temp++;
    }
    return len;
}

char* mi_strcpy (char* s1, char* s2) {
    char *pointer_1 = s1;
    char *pointer_2 = s2;

    while(*pointer_2 != '\0') {
        *pointer_1 = *pointer_2;

        pointer_1++;
        pointer_2++;
    }
    *pointer_1 = '\0';

    return s1;
}

char* mi_strcat (char* s1, char* s2) {
    char *pointer_1 = s1;
    pointer_1 += mi_strlen(pointer_1);
    char *pointer_2 = s2;
    mi_strcpy(pointer_1, pointer_2);

    return s1;
}

char* mi_strdup (char* str) {
    size_t len = mi_strlen(str) + 1;
    char* dup = (char*)malloc(len * sizeof(char));

    mi_strcpy(dup, str);
    return dup;
}

int mi_strequals (char* s1, char* s2) {
    char *pointer_1 = s1;
    char *pointer_2 = s2;

    while((*pointer_1 != '\0') || (*pointer_2 != '\0')) {
        if (*pointer_1 != *pointer_2) {
            return *pointer_1 - *pointer_2;
        }
        pointer_1++;
        pointer_2++;
    }
    return 0;
}