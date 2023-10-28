#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL,"Rus");
    printf("Привет мир!\n");
    return 0;
}

