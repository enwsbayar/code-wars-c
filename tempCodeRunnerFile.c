#include <stdio.h>
#include <string.h>

int main() {
    char array[] = {'a','b','\0','d'};
    int uzunluk = sizeof(array) / sizeof(array[0]);  
    printf("%d",uzunluk);
}