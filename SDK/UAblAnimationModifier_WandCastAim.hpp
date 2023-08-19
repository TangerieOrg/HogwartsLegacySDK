#pragma once
#include <cstdint>
#include "FBoneReferenceEx.hpp"
#include "UAblAnimationModifier.hpp"
#pragma pack(push, 1)
class UAblAnimationModifier_WandCastAim : public UAblAnimationModifier {
public:
    FBoneReferenceEx ShoulderBone; // 0x28
    FName BoneName; // 0x38
    FName EventName; // 0x40
    float DefaultInterpTime; // 0x48
    bool bLoop; // 0x4c
    bool bAlwaysUseCurrentAimInfo; // 0x4d
    char pad_4e[0x2];
    float AimYawInterpSpeed; // 0x50
    float AimPitchInterpSpeed; // 0x54
    static UAblAnimationModifier_WandCastAim* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
