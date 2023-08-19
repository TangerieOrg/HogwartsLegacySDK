#pragma once
#include <cstdint>
#include "UBaseArchitectFilter.hpp"
#pragma pack(push, 1)
class UAAFilter_AnimationLength : public UBaseArchitectFilter {
public:
    float MaxAnimationLength; // 0x28
    char pad_2c[0x4];
    static UAAFilter_AnimationLength* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
