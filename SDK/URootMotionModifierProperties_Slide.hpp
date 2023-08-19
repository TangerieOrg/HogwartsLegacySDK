#pragma once
#include <cstdint>
#include "ECustomInterpType\Type.hpp"
#include "URootMotionModifierProperties.hpp"
#pragma pack(push, 1)
class URootMotionModifierProperties_Slide : public URootMotionModifierProperties {
public:
    float DesiredSlopeSpeed; // 0x30
    ECustomInterpType::Type SlopeVelocityInterpType; // 0x34
    char pad_35[0x3];
    float SlopeVelocityInterpSpeed; // 0x38
    ECustomInterpType::Type ToFlatGroundInterpType; // 0x3c
    char pad_3d[0x3];
    float ToFlatGroundInterpSpeed; // 0x40
    char pad_44[0x4];
    static URootMotionModifierProperties_Slide* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
