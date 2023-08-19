#pragma once
#include <cstdint>
#include "ECustomInterpType\Type.hpp"
#include "URootMotionModifierProperties.hpp"
#pragma pack(push, 1)
class URootMotionModifierProperties_ButtSlide : public URootMotionModifierProperties {
public:
    float DownwardForce; // 0x30
    float Friction; // 0x34
    ECustomInterpType::Type RotationInterpType; // 0x38
    char pad_39[0x3];
    float RotationInterpSpeed; // 0x3c
    static URootMotionModifierProperties_ButtSlide* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
