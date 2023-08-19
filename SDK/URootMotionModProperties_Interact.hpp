#pragma once
#include <cstdint>
#include "ECustomInterpType\Type.hpp"
#include "EInteractOffsetRules.hpp"
#include "EInteractTurnToFaceRules.hpp"
#include "EInteractUseTargetAxis.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class URootMotionModProperties_Interact : public UObject {
public:
    EInteractTurnToFaceRules TurnToFaceRule; // 0x28
    EInteractUseTargetAxis UseTargetAxisForFacing; // 0x29
    ECustomInterpType::Type RotateInterpType; // 0x2a
    char pad_2b[0x1];
    float RotateInterpSpeed; // 0x2c
    float RotateInterpTime; // 0x30
    EInteractOffsetRules OffsetRule; // 0x34
    EInteractUseTargetAxis UseTargetAxisForOffset; // 0x35
    char pad_36[0x2];
    float MinOffset; // 0x38
    float MaxOffset; // 0x3c
    ECustomInterpType::Type OffsetInterpType; // 0x40
    char pad_41[0x3];
    float OffsetInterpSpeed; // 0x44
    float OffsetInterpTime; // 0x48
    char pad_4c[0x4];
    static URootMotionModProperties_Interact* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
