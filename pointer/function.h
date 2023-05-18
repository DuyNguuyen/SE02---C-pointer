#ifndef FUNCTION_H
#define FUNCTION_H

void swap (int* a, int* b)
{
   int temp = *a;
   *a = *b;
    *b = temp;
}

int get_length(char* a)
{
    int count = 0;
    while (*a != '\0'){
        count++;
        a++;
    }
    
    return count;
}

#endif /* FUNCTION_H */

