
#include <stdio.h>

int main()
{
    int length, width, perimeter;

    printf("Enter length: ");
    scanf("%d", &length);

    printf("Enter width: ");
    scanf("%d", &width);

    perimeter = 2 * (length + width);

    printf("Perimeter of rectangle = %d\n", perimeter);

    return 0;
}
