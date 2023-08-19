#pragma once
#include <cstdint>
#include "UFXAutoTriggerScalar.hpp"
class UClass;
#pragma pack(push, 1)
class UFXAutoTriggerScalarSkinFXParameter : public UFXAutoTriggerScalar {
public:
    UClass* Effect; // 0x28
    FName Parameter; // 0x30
    float DefaultValue; // 0x38
    char pad_3c[0x4];
    static UFXAutoTriggerScalarSkinFXParameter* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
