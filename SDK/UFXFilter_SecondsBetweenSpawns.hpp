#pragma once
#include <cstdint>
#include "UFXFilter.hpp"
#pragma pack(push, 1)
class UFXFilter_SecondsBetweenSpawns : public UFXFilter {
public:
    float SecondsBetweenSpawns; // 0x30
    char pad_34[0x4];
    static UFXFilter_SecondsBetweenSpawns* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
