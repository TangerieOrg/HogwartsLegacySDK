#pragma once
#include <cstdint>
#include "UCameraStackBehaviorBlend.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorConvertToTranslation : public UCameraStackBehaviorBlend {
public:
    char pad_1b8[0x58];
    static UCameraStackBehaviorConvertToTranslation* StaticClass();
}; // Size: 0x210
#pragma pack(pop)
