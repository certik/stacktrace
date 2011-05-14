#include "c_stacktrace.h"

void g()
{
    show_stacktrace();
}

void f()
{
    g();
}

int main()
{
    f();

    print_stack_on_segfault();

    // This will segfault:
    char *p; *p=0;

    return 0;
}
