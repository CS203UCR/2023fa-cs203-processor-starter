#ifndef MATEXP_REFERENCE_INCLUDED
#define MATEXP_REFERENCE_INCLUDED
#include <cstdlib>
#include "archlab.h"
#include <unistd.h>
#include<cstdint>
#include"function_map.hpp"
#include <bits/stdc++.h>
using namespace std;


//template<typename T>
void __attribute__((noinline,optimize("O4"))) tax_reference(int32_t *result, int32_t *source, uint32_t size) {
    // Base Case
    for(int i = 0; i < size; i++)
    {
        if(source[i] < 11000)
            result[i] = source[i] * 0.1;
        else if(source[i] >= 11000 && source[i] < 44725)
            result[i] = (source[i] -11000 )* 0.12 + 1100;
        else if(source[i] >= 44725 && source[i] < 95375)
            result[i] = (source[i] -44725 )* 0.22 + 5147;
        else if(source[i] >= 95375 && source[i] < 182100)
            result[i] = (source[i] -95375 )* 0.24 + 16290;
        else if(source[i] >= 182100 && source[i] < 231250)
            result[i] = (source[i] -182100 )* 0.32 + 37104;
        else if(source[i] >= 231250 && source[i] < 578125)
            result[i] = (source[i] -231250 )* 0.35 + 52832;
        else
            result[i] = (source[i] -578125 )* 0.37 + 174238;
    }
}
#endif