#pragma once
#include <cstdint>
#include "ECustomInterpType\Type.hpp"
#include "FVector2D.hpp"
#include "URootMotionModifierProperties.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class URootMotionModifierProperties_JumpNudge : public URootMotionModifierProperties {
public:
    float TimeWhenPlayerCanChangeJumpType; // 0x30
    ECustomInterpType::Type TurnToFaceInterpType; // 0x34
    char pad_35[0x3];
    float TurnToFaceInterpSpeed; // 0x38
    char pad_3c[0x4];
    UCurveFloat* DeadZoneCurve; // 0x40
    FVector2D MaxStrafeSpeed; // 0x48
    ECustomInterpType::Type StrafeInterpType; // 0x50
    char pad_51[0x3];
    float StrafeInterpSpeed; // 0x54
    ECustomInterpType::Type StrafeRotationInterpType; // 0x58
    char pad_59[0x3];
    float StrafeRotationInterpSpeed; // 0x5c
    ECustomInterpType::Type StrafeTranslationInterpType; // 0x60
    char pad_61[0x3];
    float StrafeTranslationInterpSpeed; // 0x64
    ECustomInterpType::Type ShortJumpRotationInterpType; // 0x68
    char pad_69[0x3];
    float ShortJumpRotationInterpSpeed; // 0x6c
    ECustomInterpType::Type LongJumpRotationInterpType; // 0x70
    char pad_71[0x3];
    float LongJumpRotationInterpSpeed; // 0x74
    float LongJumpMinStickPercentage; // 0x78
    float LongJumpPullBackOnStickPercentage; // 0x7c
    ECustomInterpType::Type SprintJumpRotationInterpType; // 0x80
    char pad_81[0x3];
    float SprintJumpRotationInterpSpeed; // 0x84
    float SprintJumpMinStickPercentage; // 0x88
    float SprintJumpPullBackOnStickPercentage; // 0x8c
    static URootMotionModifierProperties_JumpNudge* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
