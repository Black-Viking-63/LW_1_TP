#pragma once
#ifdef LIBRARYREADER_EXPORTS
#define LIBRARYREADER_API __declspec(dllexport)
#else
#define LIBRARYREADER_API __declspec(dllimport)
#endif

extern "C" LIBRARYREADER_API bool skipLine();

extern "C" LIBRARYREADER_API bool readInt(int& target);
extern "C" LIBRARYREADER_API bool readDouble(double& target);
extern "C" LIBRARYREADER_API bool readDoubleInt(double& target);
extern "C" LIBRARYREADER_API bool readLineInt(int& target);
extern "C" LIBRARYREADER_API bool readLineDouble(double& target);
