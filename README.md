# GcovUsage

A Sample program to uderstand the code coverage using gcov.

For use:

Compile the c program with gcc with -fprofile-arcs -ftest-coverage

Run the program.

Run Gcov with source program name as argument will produce a listing of the code along with frequency of execution for each line.

"gcov -b sourceprogram.c"
