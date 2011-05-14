Stacktrace
==========

This library allows you to print the stacktrace just like Python, with
filenames, line numbers, function names and the line itself.

It works for shared libraries too.

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
