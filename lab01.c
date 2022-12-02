#include <stdio.h>

#define LOVE "Nut"


int main()
{

    // integer data types
    int signedInt = 10; // 4 bytes
    unsigned int unsignedInt = 10; 
    long longNum = 10000;
    long long zz = 1000000000000000000;
    unsigned long long veryLongInt = 1000000000000000000;

    // floating data types
    float simpleFloat = 3.14;
    double longFloat = 3.14159265358979323846;

    // character data types
    char simpleChar = 'a';
    // every ending of a string must be a null character (\0)
    char name[] = "Chokun";

    printf("%s love %s", name , LOVE);
}