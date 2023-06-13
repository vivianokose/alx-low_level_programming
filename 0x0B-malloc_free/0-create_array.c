#include <main.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: storage char
 *
 * Return: pointer of an array of chars
 */

char *create_array(unsigned int size, char c) 
{
    if (size == 0)
        return NULL;
    
    char* array = (char*)malloc(size * sizeof(char));
    if (array == NULL)
        return NULL;
    
    for (unsigned int i = 0; i < size; i++) 
    {
        array[i] = c;
    }
    
    return array;
}

int main() 
{
    unsigned int size = 5;
    char c = 'A';
    
    char* array = create_array(size, c);
    
    if (array == NULL) 
    {
        printf("Memory allocation failed.\n");
        return 1;
    }
    
    for (unsigned int i = 0; i < size; i++) 
    {
        printf("%c ", array[i]);
    }
    
    free(array);
    
    return 0;
}
