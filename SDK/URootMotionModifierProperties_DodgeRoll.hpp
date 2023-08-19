#pragma once
#include <cstdint>
#include "ECustomInterpType\Type.hpp"
#include "URootMotionModifierProperties.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class URootMotionModifierProperties_DodgeRoll : public URootMotionModifierProperties {
public:
    bool bShadowBlink; // 0x30
    bool bShadowBlinkWithTarget; // 0x31
    ECustomInterpType::Type TurnToFaceInterpType; // 0x32
    char pad_33[0x1];
    float TurnToFaceInterpSpeed; // 0x34
    float TurnToFaceInterpTime; // 0x38
    ECustomInterpType::Type RotationInterpType; // 0x3c
    char pad_3d[0x3];
    float RotationInterpSpeed; // 0x40
    float RotationInterpTime; // 0x44
    float TranslationMultiplier; // 0x48
    char pad_4c[0x4];
    UCurveFloat* TranslationMultiplierCurve; // 0x50
    float BlinkSpeed; // 0x58
    char pad_5c[0x4];
    static URootMotionModifierProperties_DodgeRoll* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
