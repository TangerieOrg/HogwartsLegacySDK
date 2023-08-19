#pragma once
#include <cstdint>
#include "UCameraStackBehaviorBlend.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorConvertToArmOriginTranslation : public UCameraStackBehaviorBlend {
public:
    char pad_1b8[0x70];
    static UCameraStackBehaviorConvertToArmOriginTranslation* StaticClass();
}; // Size: 0x228
#pragma pack(pop)
