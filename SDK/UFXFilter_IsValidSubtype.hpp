#pragma once
#include <cstdint>
#include "UFXFilter.hpp"
#pragma pack(push, 1)
class UFXFilter_IsValidSubtype : public UFXFilter {
public:
    TArray<FName> ValidSubtypes; // 0x30
    static UFXFilter_IsValidSubtype* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
