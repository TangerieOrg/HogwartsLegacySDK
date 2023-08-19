#pragma once
#include <cstdint>
#include "FBoneReferenceEx.hpp"
#include "UIKDriver.hpp"
#pragma pack(push, 1)
class UIKDriver_GhostHips : public UIKDriver {
public:
    FBoneReferenceEx HipsBone; // 0x28
    FName AlphaVariableName; // 0x38
    FName TransformVariableName; // 0x40
    float InterpSpeed; // 0x48
    float InterpDampingFactor; // 0x4c
    char pad_50[0x78];
    static UIKDriver_GhostHips* StaticClass();
}; // Size: 0xc8
#pragma pack(pop)
