#include <stdio.h>

int main()
{
    printf("1. Newline example:\\n\nHello\nWorld\n");
    printf("2. Tab example:\\t\nHello\tWorld\n");
    printf("3. Backslash example:\\\\\nThis is a backslash: \\\n");
    printf("4. Double quote example:\\\"\nThis is a double quote: \"Hello\"\n");
    printf("5. Single quote example:\\\'\nThis is a single quote: \'A\'\n");
    printf("6. Question mark example:\\?\nThis is a question mark: \?\n");
    printf("7. Alert example:\\a\n");
    printf("\a");                                             // Produces a beep sound (if supported)
    printf("8. Backspace example:\\b\nABC\bX\n");             // Deletes the previous character
    printf("9. Carriage return example:\\r\nHello\rWorld\n"); // Replaces "Hello" with "World"
    printf("10. Form feed example:\\f\nHello\fWorld\n");      // Rarely visible
    printf("11. Vertical tab example:\\v\nHello\vWorld\n");   // Rarely visible
    printf("12. Null character example:\\0\n");               // Demonstrated below
    char str[10] = "Hello\0World";
    printf("String with null character: %s\n", str); // Only "Hello" is printed

    return 0;
}
