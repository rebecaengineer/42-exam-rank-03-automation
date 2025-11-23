#include <string.h>
#include <stdio.h>

int main() {
    char buffer[10];
    
    // Sin \0 al final
    memcpy(buffer, "abc", 3);
    
    // memmem funciona sin \0
    char *found = memmem(buffer, 3, "bc", 2);
    printf("memmem encontró 'bc': %s\n", found ? "SÍ" : "NO");
    
    // Pero strlen NO funcionaría correctamente
    printf("strlen sin \\0: %zu (comportamiento indefinido)\n", strlen(buffer));
    
    // Con \0
    buffer[3] = '\0';
    printf("strlen con \\0: %zu (correcto)\n", strlen(buffer));
    
    return 0;
}
