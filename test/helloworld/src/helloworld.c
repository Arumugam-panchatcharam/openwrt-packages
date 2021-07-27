#include <stdio.h>

int main(int argc, char **argv)
{
    printf("Hello World\n");

#if defined(FOO)
    printf("Feature FOO was selected.\n");
#endif

#if defined(BAR)
    printf("Feature BAR was selected.\n");
#endif
}
