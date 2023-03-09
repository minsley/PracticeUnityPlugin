#ifndef PRACTICEUNITYPLUGIN2_LIBRARY_H
#define PRACTICEUNITYPLUGIN2_LIBRARY_H

#pragma once

#if defined(_MSC_VER)
#define DLLExport __declspec(dllexport) // Microsoft
#elif defined(__GNUC__)
#define DLLExport __attribute__((visibility("default"))) // GCC
#else
#define DLLExport // Most compilers export all the symbols by default. We hope for the best here.
    #pragma warning Unknown dynamic link import/export semantics.
#endif

extern "C"
{
DLLExport int Add(int num1, int num2);
DLLExport int Multiply(int num1, int num2);
DLLExport int Subtract(int num1, int num2);
DLLExport int Divide(int num1, int num2);
DLLExport const char* PrintHello();
}

#endif //PRACTICEUNITYPLUGIN2_LIBRARY_H
