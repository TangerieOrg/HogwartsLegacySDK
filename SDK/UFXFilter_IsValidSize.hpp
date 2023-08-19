#pragma once
#include <cstdint>
#include "EObjectSizeClass.hpp"
#include "UFXFilter.hpp"
#pragma pack(push, 1)
class UFXFilter_IsValidSize : public UFXFilter {
public:
    EObjectSizeClass SmallestValidSize; // 0x30
    EObjectSizeClass LargestValidSize; // 0x31
    char pad_32[0x6];
    static UFXFilter_IsValidSize* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
