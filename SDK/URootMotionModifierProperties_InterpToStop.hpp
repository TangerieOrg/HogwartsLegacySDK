#pragma once
#include <cstdint>
#include "ECustomInterpType\Type.hpp"
#include "URootMotionModifierProperties.hpp"
#pragma pack(push, 1)
class URootMotionModifierProperties_InterpToStop : public URootMotionModifierProperties {
public:
    ECustomInterpType::Type ToStopInterpType; // 0x30
    char pad_31[0x3];
    float ToStopInterpSpeed; // 0x34
    float ToStopTotalTime; // 0x38
    char pad_3c[0x4];
    static URootMotionModifierProperties_InterpToStop* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
