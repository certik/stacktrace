#include <stdio.h>
#include <stdlib.h>

#include "stacktrace.hpp"

void g()
{
    Teuchos::show_stacktrace();
}

void f()
{
    g();
}

int main()
{
    f();

    Teuchos::print_stack_on_segfault();

    // This will segfault:
    char *p; *p=0;

    return 0;
}
