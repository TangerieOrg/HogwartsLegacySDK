#pragma once
#include <cstdint>
#include "ULightComponentStateFloatMap.hpp"
#pragma pack(push, 1)
class ULightComponentStateContactShadowLength : public ULightComponentStateFloatMap {
public:
    float ContactShadowLength; // 0x28
    bool bInWorldSpace; // 0x2c
    char pad_2d[0x3];
    static ULightComponentStateContactShadowLength* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
