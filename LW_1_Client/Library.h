#pragma once

#ifdef LIBRARY_EXPORTS
#define LIBRARY_API __declspec(dllexport)
#else
#define LIBRARY_API __declspec(dllimport)
#endif

extern "C" LIBRARY_API void equation_solution(long long a, long long b, long long c);

extern "C" LIBRARY_API double discriminant(long long a, long long b, long long c);
