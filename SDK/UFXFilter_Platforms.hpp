#pragma once
#include <cstdint>
#include "UFXFilter.hpp"
#pragma pack(push, 1)
class UFXFilter_Platforms : public UFXFilter {
public:
    int32_t Platforms; // 0x30
    char pad_34[0x4];
    static UFXFilter_Platforms* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
