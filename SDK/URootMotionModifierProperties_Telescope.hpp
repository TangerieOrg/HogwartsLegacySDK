#pragma once
#include <cstdint>
#include "ECustomInterpType\Type.hpp"
#include "FVector.hpp"
#include "URootMotionModifierProperties.hpp"
#pragma pack(push, 1)
class URootMotionModifierProperties_Telescope : public URootMotionModifierProperties {
public:
    FVector Offset; // 0x30
    ECustomInterpType::Type InterpType; // 0x3c
    char pad_3d[0x3];
    float InterpSpeed; // 0x40
    float InterpTime; // 0x44
    static URootMotionModifierProperties_Telescope* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
