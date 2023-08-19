#pragma once
#include <cstdint>
#include "ECustomInterpType\Type.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblSlopeSlideTask : public UAblAbilityTask {
public:
    float DesiredSlopeSpeed; // 0x70
    ECustomInterpType::Type SlopeVelocityInterpType; // 0x74
    char pad_75[0x3];
    float SlopeVelocityInterpSpeed; // 0x78
    ECustomInterpType::Type ToFlatGroundInterpType; // 0x7c
    char pad_7d[0x3];
    float ToFlatGroundInterpSpeed; // 0x80
    float SlopeFriction; // 0x84
    static UAblSlopeSlideTask* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
