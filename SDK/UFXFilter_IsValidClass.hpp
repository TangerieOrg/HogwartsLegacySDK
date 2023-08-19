#pragma once
#include <cstdint>
#include "UFXFilter.hpp"
#pragma pack(push, 1)
class UFXFilter_IsValidClass : public UFXFilter {
public:
    TArray<void*> ValidClasses; // 0x30
    bool bIncludeParents; // 0x40
    char pad_41[0x7];
    static UFXFilter_IsValidClass* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
