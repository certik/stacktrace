Stacktrace
==========

This library allows you to print the stacktrace just like Python, with
filenames, line numbers, function names and the line itself.

It works for shared libraries too.

License
-------

Stacktrace is BSD licensed. See the LICENSE file for more details.

Example of a stacktrace
-----------------------

This example uses a shared library (and you can see that everything works)::

    Traceback (most recent call last):
      File "/build/buildd/eglibc-2.10.1/csu/../sysdeps/x86_64/elf/start.S", line 113, in _start
      File "/build/buildd/eglibc-2.10.1/csu/libc-start.c", line 220, in __libc_start_main
      File "/home/ondrej/repos/hermes2d/benchmarks/bessel/main.cpp", line 140, in main
            rs.assemble();
      File "/home/ondrej/repos/hermes2d/src/refsystem.cpp", line 178, in RefSystem::assemble(bool)
          if (this->linear == true) LinSystem::assemble(rhsonly);
      File "/home/ondrej/repos/hermes2d/src/linsystem.cpp", line 618, in LinSystem::assemble(bool)
                      bi = eval_form(jfv, NULL, fu, fv, &refmap[n], &refmap[m]) * an->coef[j] * am->coef[i];
      File "/home/ondrej/repos/hermes2d/src/linsystem.cpp", line 837, in LinSystem::eval_form(WeakForm::JacFormVol*, Solution**, PrecalcShapeset*, PrecalcShapeset*, RefMap*, RefMap*)
          show_backtrace();
      File "/home/ondrej/repos/cpp_stacktrace/backtrace-symbols.c", line 420, in show_backtrace()
          size = backtrace (array, 10);

Prerequisites
-------------

The only requirement is the ``binutils`` package. On Ubuntu, do::

    sudo apt-get install binutils-dev

Stacktrace is written in C++ and besides binutils doesn't have any other
dependencies. C wrapper is included.

Usage
-----

Include ``stacktrace.cpp`` and ``stacktrace.hpp`` in your projects, generate
``Teuchos_ConfigDefs.hpp`` (included from ``stacktrace.hpp``) using your
configure scripts (e.g. cmake, autotools, ...), or just leave everything
enabled in there.

You can run the example ``compile`` script to compile tests. Consult it for
examples how to use stacktrace in C programs.
